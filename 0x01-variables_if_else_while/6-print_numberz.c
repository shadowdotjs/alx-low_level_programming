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
	int num;


	for (num = 0; num < 10; num++)
		putchar(num + '0');

	putchar('\n');

	return (0);
}
