#include "../main.h"

int main(void)
{
_printf("Octal: %o\n#Octal: %#o\nLOctal: %lo\nHOctal: %ho\n", 120, 120, 75, 89);
_printf("______________________________________________________\n");
_printf("hex: %x\n#hex: %#x\nLhex: %lx\nHhex: %hx\n", 120, 120, 120, 120);
_printf("______________________________________________________\n");
_printf("HEX: %X\n#HEX: %#X\nLHEX: %lX\nHHEX: %hX\n", 120, 120, 120, 120);
_printf("______________________________________________________\n");
_printf("Undigned-dec: %u\nLUndigned-dec: %lu\nHUndigned-dec: %hu\n", 120, 120, 120);
_printf("______________________________________________________\n");
_printf("dec: %d\nLhex: %ld\nHhex: %hd\n", 120, 120, 120);
_printf("______________________________________________________\n");

	return (0);
}
