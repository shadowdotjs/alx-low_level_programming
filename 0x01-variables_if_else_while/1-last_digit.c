#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Positive anything is better than negative nothing */
/**
 * main- entry point for program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		int lastD = (n % 10);

		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	}
	else if (n % 10 ==  0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (n % 10 < 6 && !0)
	{
		int lastD = (n % 10);

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}
	return (0);
}
