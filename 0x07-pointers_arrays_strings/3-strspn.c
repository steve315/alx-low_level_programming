#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: substring
 * Return: 0 on sucess
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k, len;

	len = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				len++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (len);
			}
		}	
	}
	return (len);
}
