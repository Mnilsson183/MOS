ASM=nasm
CC=gcc

SRC_DIR=src
BUILD_DIR=build
TOOLS_DIR=tools

.PHONY: all floppy_image kernel bootloader clean always tools_fat

all: floppy_image tools_fat
#
# Floppy image
#
floppy_image: $(BUILD_DIR)/main_floppy.img


$(BUILD_DIR)/main_floppy.img: bootloader kernel
	dd if=/dev/zero of=$(BUILD_DIR)/main_floppy.img bs=512 count=2880
	sudo mkfs.fat -F 12 -n "NBOS" $(BUILD_DIR)/main_floppy.img
	dd if=$(BUILD_DIR)/bootloader.bin of=$(BUILD_DIR)/main_floppy.img conv=notrunc
	sudo mcopy -i $(BUILD_DIR)/main_floppy.img $(BUILD_DIR)/kernel.bin "::kernel.bin"

#
# Bootloader
#
bootloader: $(BUILD_DIR)/bootloader.bin

$(BUILD_DIR)/bootloader.bin: always
	$(ASM) $(SRC_DIR)/bootloader/boot.asm -f bin -o $(BUILD_DIR)/bootloader.bin

#
# Kernel
#
kernel: $(BUILD_DIR)/kernel.bin

$(BUILD_DIR)/kernel.bin: always
	$(ASM) $(SRC_DIR)/kernel/kernel.asm -f bin -o $(BUILD_DIR)/kernel.bin

#
# Always
#
always:
	mkdir -p $(BUILD_DIR)

#
# Clean
#
clean:
	rm -rf $(BUILD_DIR)/*

run:
	qemu-system-i386 -fda build/main_floppy.img