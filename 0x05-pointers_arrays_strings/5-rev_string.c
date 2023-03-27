#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	char a = s[0];
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
		for (i = 0; i < j; i++)
		{
			j--;
			a = s[i];
			s[i] = s[j];
			s[j] = a;
		}
	}
}
