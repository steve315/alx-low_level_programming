#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @str: input string
 * Return: 0 in success
 */
char *rot13(char *str)
{
	int i, r;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (r = 0; r < 52; r++)
		{
			if (str[i] == rot1[r])
			{
				str[i] = rot2[r];
				break;
			}
		}
	}
return (str);
}
