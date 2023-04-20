#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *string;
	unsigned int i, j, x;
	char arr[] = "iscf";

	j = x = i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		while (arr[x])
		{
			if (format[i] == arr[x] && j)
			{
				printf(", ");
				break;
			} x++;
		}
		switch (format[i])
		{
			case 'i': /* constant-expression */
				printf("%d", va_arg(args, int)), j = 1;
				break;
			case 's':
				string = va_arg(args, char *), j = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			case 'c':
				printf("%c", va_arg(args, int)), j = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), j = 1;
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}
