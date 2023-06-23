#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all- prints a anything
 * @format: the format to be used
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "", *str;

	va_start(args, format);
	if (format == NULL)
		return;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
}