#include <unistd.h>
/**
 * _putchar - prints character to the standard output
 * @c:  character input
 * Return: 0 on success
 * on error -1 returned with the error number
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
