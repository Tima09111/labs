#include "alu.hpp"

static void update_zn(Byte result, Flags& f) {
    f.z = (result == 0);
    f.n = (result & 0x80) != 0; // перевіряємо 7-й (старший) біт
}

Byte alu_add(Byte a, Byte b, Flags& f) {
    uint16_t res = (uint16_t)a + (uint16_t)b;
    Byte result = (Byte)(res & 0xFF);
    f.c = (res > 0xFF); // перенесення, якщо більше 255
    update_zn(result, f);
    return result;
}

Byte alu_sub(Byte a, Byte b, Flags& f) {
    Byte result = a - b;
    f.c = (a < b); // заём / перенесення
    update_zn(result, f);
    return result;
}

Byte alu_and(Byte a, Byte b, Flags& f) {
    Byte result = a & b;
    f.c = false;
    update_zn(result, f);
    return result;
}

Byte alu_or(Byte a, Byte b, Flags& f) {
    Byte result = a | b;
    f.c = false;
    update_zn(result, f);
    return result;
}

Byte alu_xor(Byte a, Byte b, Flags& f) {
    Byte result = a ^ b;
    f.c = false;
    update_zn(result, f);
    return result;
}

Byte alu_not(Byte a, Flags& f) {
    Byte result = ~a;
    f.c = false;
    update_zn(result, f);
    return result;
}

Byte alu_shl(Byte a, Flags& f) {
    f.c = (a & 0x80) != 0; // висувний старший біт
    Byte result = a << 1;
    update_zn(result, f);
    return result;
}

Byte alu_shr(Byte a, Flags& f) {
    f.c = (a & 0x01) != 0; // висувний молодший біт
    Byte result = a >> 1;
    update_zn(result, f);
    return result;
}

Byte alu_inc(Byte a, Flags& f) {
    return alu_add(a, 1, f);
}

Byte alu_dec(Byte a, Flags& f) {
    return alu_sub(a, 1, f);
}