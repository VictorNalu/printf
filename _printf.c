#include "main.h"


void print_buffer(char buffer[], int *buff_ind);


/**

 * _printf - Printf function

 * @format: format.

 * Return: Printed chars.

 */

int _printf(const char *format, ... )
{
	int count = 0;
	va_list args;

	if (fomat = NULL)
		return (-1);
	va_strings(args, format);

	while (*fomat)
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}

		format++;
	}

	return (count);

}
