#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - 
 * @separator: 
 * @n: argument
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    char *string;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        string = va_arg(args, char *);
        if (string)
        {
            printf("%s", string);
        }
        else
        {
            printf("(nil)");
        }
        if (i < (n - 1))
        {
            if(separator)
            {
                printf("%s", separator);
            }
        }
    }
    printf("\n");
    va_end(args);
}
