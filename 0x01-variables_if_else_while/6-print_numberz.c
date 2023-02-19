#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point
 * A program that prints base 10 numbers starting from zero
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int a = 0;


	while (a < 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
		return (0);
}
