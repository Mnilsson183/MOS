#ifndef KEYBOARD_H
#define KEYBOARD_H

/**
 * @brief Virtual key codes
 */
typedef enum {
    VK_LBUTTON = 0x01,  // Left mouse button
    VK_RBUTTON = 0x02,  // Right mouse button
    VK_CANCEL = 0x03,  // Control-break processing
    VK_MBUTTON = 0x04,  // Middle mouse button (three-button mouse)
    VK_XBUTTON1 = 0x05,  // X1 mouse button
    VK_XBUTTON2 = 0x06,  // X2 mouse button

    VK_BACK = 0x08,  // BACKSPACE key
    VK_TAB = 0x09,  // TAB key

    VK_CLEAR = 0x0C,  // CLEAR key
    VK_RETURN = 0x0D,  // ENTER key

    VK_SHIFT = 0x10,  // SHIFT key
    VK_CONTROL = 0x11,  // CTRL key
    VK_MENU = 0x12,  // ALT key
    VK_PAUSE = 0x13,  // PAUSE key
    VK_CAPITAL = 0x14,  // CAPS LOCK key
    VK_KANA = 0x15,  // IME Kana mode
    VK_HANGUEL = 0x15,  // IME Hanguel mode (maintained for compatibility; use VK_HANGUL)
    VK_IME_ON = 0x16,  // IME On
    VK_JUNJA = 0x17,  // IME Junja mode
    VK_FINAL = 0x18,  // IME final mode
    VK_HANJA = 0x19,  // IME Hanja mode
    VK_KANJI = 0x19,  // IME Kanji mode
    VK_IME_OFF = 0x1A,  // IME Off
    VK_ESCAPE = 0x1B,  // ESC key
    VK_CONVERT = 0x1C,  // IME convert
    VK_NONCONVERT = 0x1D,  // IME nonconvert
    VK_ACCEPT = 0x1E,  // IME accept
    VK_MODECHANGE = 0x1F,  // IME mode change
    VK_SPACE = 0x20,  // SPACEBAR
    VK_PRIOR = 0x21,  // PAGE UP key
    VK_NEXT = 0x22,  // PAGE DOWN key
    VK_END = 0x23,  // END key
    VK_HOME = 0x24,  // HOME key
    VK_LEFT = 0x25,  // LEFT ARROW key
    VK_UP = 0x26,  // UP ARROW key
    VK_RIGHT = 0x27,  // RIGHT ARROW key
    VK_DOWN = 0x28,  // DOWN ARROW key
    VK_SELECT = 0x29,  // SELECT key
    VK_PRINT = 0x2A,  // PRINT key
    VK_EXECUTE = 0x2B,  // EXECUTE key
    VK_SNAPSHOT = 0x2C,  // PRINT SCREEN key
    VK_INSERT = 0x2D,  // INS key
    VK_DELETE = 0x2E,  // DEL key
    VK_HELP = 0x2F,  // HELP key
    VK_0 = 0x30,  // 0 key
    VK_1 = 0x31,  // 1 key
    VK_2 = 0x32,  // 2 key
    VK_3 = 0x33,  // 3 key
    VK_4 = 0x34,  // 4 key
    VK_5 = 0x35,  // 5 key
    VK_6 = 0x36,  // 6 key
    VK_7 = 0x37,  // 7 key
    VK_8 = 0x38,  // 8 key
    VK_9 = 0x39,  // 9 key
    VK_A = 0x41,  // A key
    VK_B = 0x42,  // B key
    VK_C = 0x43,  // C key
    VK_D = 0x44,  // D key
    VK_E = 0x45,  // E key
    VK_F = 0x46,  // F key
    VK_G = 0x47,  // G key
    VK_H = 0x48,  // H key
    VK_I = 0x49,  // I key
    VK_J = 0x4A,  // J key
    VK_K = 0x4B,  // K key
    VK_L = 0x4C,  // L key
    VK_M = 0x4D,  // M key
    VK_N = 0x4E,  // N key
    VK_O = 0x4F,  // O key
    VK_P = 0x50,  // P key
    VK_Q = 0x51,  // Q key
    VK_R = 0x52,  // R key
    VK_S = 0x53,  // S key
    VK_T = 0x54,  // T key
    VK_U = 0x55,  // U key
    VK_V = 0x56,  // V key
    VK_W = 0x57,  // W key
    VK_X = 0x58,  // X key
    VK_Y = 0x59,  // Y key
    VK_Z = 0x5A,  // Z key
    VK_LSUPER = 0x5B,  // Left Super key
    VK_RSUPER = 0x5C,  // Right Super key
    VK_APPS = 0x5D,  // Applications key
    VK_SLEEP = 0x5F,  // Computer Sleep key
    VK_NUMPAD0 = 0x60,  // Numeric keypad 0 key
    VK_NUMPAD1 = 0x61,  // Numeric keypad 1 key
    VK_NUMPAD2 = 0x62,  // Numeric keypad 2 key
    VK_NUMPAD3 = 0x63,  // Numeric keypad 3 key
    VK_NUMPAD4 = 0x64,  // Numeric keypad 4 key
    VK_NUMPAD5 = 0x65,  // Numeric keypad 5 key
    VK_NUMPAD6 = 0x66,  // Numeric keypad 6 key
    VK_NUMPAD7 = 0x67,  // Numeric keypad 7 key
    VK_NUMPAD8 = 0x68,  // Numeric keypad 8 key
    VK_NUMPAD9 = 0x69,  // Numeric keypad 9 key
    VK_MULTIPLY = 0x6A,  // Multiply key
    VK_ADD = 0x6B,  // Add key
    VK_SEPARATOR = 0x6C,  // Separator key
    VK_SUBTRACT = 0x6D,  // Subtract key
    VK_DECIMAL = 0x6E,  // Decimal key
    VK_DIVIDE = 0x6F,  // Divide key
    VK_F1 = 0x70,  // F1 key
    VK_F2 = 0x71,  // F2 key
    VK_F3 = 0x72,  // F3 key
    VK_F4 = 0x73,  // F4 key
    VK_F5 = 0x74,  // F5 key
    VK_F6 = 0x75,  // F6 key
    VK_F7 = 0x76,  // F7 key
    VK_F8 = 0x77,  // F8 key
    VK_F9 = 0x78,  // F9 key
    VK_F10 = 0x79,  // F10 key
    VK_F11 = 0x7A,  // F11 key
    VK_F12 = 0x7B,  // F12 key
    VK_F13 = 0x7C,  // F13 key
    VK_F14 = 0x7D,  // F14 key
    VK_F15 = 0x7E,  // F15 key
    VK_F16 = 0x7F,  // F16 key
    VK_F17 = 0x80,  // F17 key
    VK_F18 = 0x81,  // F18 key
    VK_F19 = 0x82,  // F19 key
    VK_F20 = 0x83,  // F20 key
    VK_F21 = 0x84,  // F21 key
    VK_F22 = 0x85,  // F22 key
    VK_F23 = 0x86,  // F23 key
    VK_F24 = 0x87,  // F24 key
    VK_NUMLOCK = 0x90,  // NUM LOCK key
    VK_SCROLL = 0x91,  // SCROLL LOCK key
    VK_LSHIFT = 0xA0,  // Left SHIFT key
    VK_RSHIFT = 0xA1,  // Right SHIFT key
    VK_LCONTROL = 0xA2,  // Left CONTROL key
    VK_RCONTROL = 0xA3,  // Right CONTROL key
    VK_LMENU = 0xA4,  // Left MENU key alt
    VK_RMENU = 0xA5,  // Right MENU key alt

    VK_OEM_1 = 0xBA,  // For the US standard keyboard, the ';:' key
    VK_OEM_PLUS = 0xBB,  // For any country/region, the '+' key
    VK_OEM_COMMA = 0xBC,  // For any country/region, the ',' key
    VK_OEM_MINUS = 0xBD,  // For any country/region, the '-' key
    VK_OEM_PERIOD = 0xBE,  // For any country/region, the '.' key
    VK_OEM_2 = 0xBF,  // For the US standard keyboard, the '/?' key
    VK_OEM_3 = 0xC0,  // For the US standard keyboard, the '`~' key
    VK_OEM_4 = 0xDB,  // For the US standard keyboard, the '[{' key
    VK_OEM_5 = 0xDC,  // For the US standard keyboard, the '\|' key
    VK_OEM_6 = 0xDD,  // For the US standard keyboard, the ']}' key
    VK_OEM_7 = 0xDE,  // For the US standard keyboard, the 'single-quote/double-quote' key
    VK_OEM_8 = 0xDF,  // Used for miscellaneous characters; it can vary by keyboard.
    VK_OEM_102 = 0xE2,  // Either the angle bracket key or the backslash key on the RT 102-key keyboard
    VK_PROCESSKEY = 0xE5,  // IME PROCESS key
    VK_PACKET = 0xE7,  // Used to pass Unicode characters as if they were keystrokes.

} VirtualKey;

/**
 * @brief Converts a virtual key to a character
 * 
 * @param vkey The virtual key to convert
 * @return The character corresponding to the virtual key
 */
char Virtual_key_to_char(VirtualKey vkey);

#endif