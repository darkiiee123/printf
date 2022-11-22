#include "main.h"

/**
 * print_HEX - prints hexadecimal numbers
 * @num: decimal to convert
 * @size: size of the array
 * @type: indicates if lowercase letters or uppercase
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and displaying the remainder as 0-9 or A-F
 * Return: nothing
 */
int print_HEX(long int num, unsigned int size, unsigned int type)
{
	unsigned int e, i;
	int *hex;
	int d;
	char c;

	/* Type 0 for lowercase, else upper */
	if (type == 0)
		c = 'a';
	else
		c = 'A';

	if (num < 0)
		num = num * -1;

	hex = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		hex[i] = 0;

	for (e = 0; e < size && num != 0; e++)
	{
		hex[e] = num % 16;
		num /= 16;
	}

	/* Prints the hex array */
	for (d = e - 1; d >= 0; d--)
	{
		if (type != 0)
			_putchar('0');

		if (hex[d] < 10)
			_putchar(hex[d] + '0');
		else
			_putchar((hex[d] % 10) + c);
	}
	free(hex);
	return (e);
}
