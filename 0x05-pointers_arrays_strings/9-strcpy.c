#includev "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 * Return: 0 on success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}

	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
return (dest);
}
