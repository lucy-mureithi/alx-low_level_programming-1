#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 *different variable for n
 *Return:0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n >= 0)
	{
	printf("n is positive %d/n", n);
	}
else if (n == 0)
	{
	printf("n is zero %d", n);
	}
else
	{
	printf("n is negative %d", n);
	}

return (0);
}
