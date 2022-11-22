#include "main.h"

/**
 * _printf - prints an output according to a format
 * @format: contains the formatted output to print
 *
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, int count = 0;
	/* a function pointer, that accepts va_list as argument to collect */
	/* format specifier functions and call them */
	int (*ptr_func)(va_list);

	/* Returns -1 if format is null */
	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	/* returns 0 if format is an empty string */
	if (!format[i])
		return (0);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			/* collect the function that handles a specifier */
			ptr_func = get_func(format, i + 1);
			if (ptr_func == NULL)
			{
				_putchar('%');
				count++;
			}
			else
			{
				count += ptr_func(list);
				i += get_nflags(format, i + 1);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
