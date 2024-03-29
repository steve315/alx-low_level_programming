#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s);
/**
 * main - program that multiplies two integers
 * @argc: argument count
 * @argv: pointer to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	printf("%lu\n", num1 * num2);
	return (0);
}
/**
 * _atoi - function that convert a string to an integer.
 * @s: input string
 * Return:0 on success
 */
int _atoi(char *s)
{
	long int i, d, n, length, f, digit;

	i = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
