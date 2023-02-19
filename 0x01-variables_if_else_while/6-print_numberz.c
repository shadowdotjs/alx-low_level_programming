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
	int a;


	for (a = 0; a < 10; a++)
		printf("%d", a);

	putchar('\n');

	return (0);
}
