#include "function_pointers.h"
#define NULL 0
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer
 * Return: 0 on success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(f)(name);
}
