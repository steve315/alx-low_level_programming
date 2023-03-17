#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
/* variale declaration*/
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*start of if loop*/
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is negative\n", n);
}

return (0);
}
