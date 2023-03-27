#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string pointer
 * Returns: 0 on success
 */
void puts_half(char *str)
{
	int i;
	int j;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	if ((length % 2) == 1)
	{
		j = ((length + 1) / 2);
	}
	else
	{
		j = (length / 2);
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
