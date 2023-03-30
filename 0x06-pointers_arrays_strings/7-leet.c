#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * Return: 0 on success
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 65 || s[i] == 77)
		{
			s[i] = 52;
		}
		else if (s[i] == 69 || s[i] == 101)
		{
			s[i] = 51;
		}
		else if (s[i] == 79 || s[i] == 111)
		{
			s[i] = 48;
		}
		else if (s[i] == 84 || s[i] == 116)
		{
			s[i] = 55;
		}
		else if (s[i] == 76 || s[i] == 108)
		{
			s[i] = 49;
		}
	}
return (s);
}
