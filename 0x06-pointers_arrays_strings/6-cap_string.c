#include "main.h"
/**
 * cap_string - function that capitalises all words of a string
 * @str: input string
 * Return: 0 on success
 */
char *cap_string(char *str)
{
	int i, j;
	int sep[13] = {9, 10, 32, 46, 44, 33, 63, 34, 40, 41, 59, 123, 125};

	for (j = 0; j < 13; j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{

			if (str[i] == sep[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
