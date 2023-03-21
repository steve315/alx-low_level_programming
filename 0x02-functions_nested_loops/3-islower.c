#include <stdio.h>
#include <ctype.h>
/**
 * main -  entry point
 * print_alphabet - prints letters of the alphabet in lowecase
 * @parameter - null
 * Return: 0
 */
int _islower(int c);
int main(void)
{
	_islower('y');
	putchar('\n');
}
int _islower(int c)
{
	int r;

	r = islower(c);
	return (putchar(r + '0'));
}
