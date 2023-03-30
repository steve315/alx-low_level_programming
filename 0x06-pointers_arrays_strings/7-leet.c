#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * Return: 0 on success
 */
char *leet(char *s)
{
	int i, j;

	char n1[] = "aAeEoOtTlL";
	char n2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == n1[j])
			{
				s[i] = n2[j];
			}
		}
	}
	return (s);
}
