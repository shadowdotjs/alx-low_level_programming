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
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
		putchar('\n');
		return (0);
}
