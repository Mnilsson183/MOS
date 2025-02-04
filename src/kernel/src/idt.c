#include "../include/idt.h"

idt_gate_t idt[256];
idt_register_t idt_reg;
void set_idt_gate(int n, uint32_t handler) {
    idt[n].low_offset = low_16(handler);
    idt[n].selector = 0x08;
    idt[n].zero = 0;

    // 1 00 0 1 110 = 0x8E
    idt[n].flags = 0x8E;
    idt[n].high_offset = high_16(handler);
}

void load_idt(void) {
    idt_reg.base = (uint32_t) &idt;
    idt_reg.limit = IDT_ENTRIES * sizeof(idt_gate_t) - 1;
    asm volatile("lidt (%0)" : : "r" (&idt_reg));
}