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
	int al = 'A';

        while (alpha <= 'z')
        {
                putchar(alpha);
                alpha++;
        }

	while (al <= 'Z')
	{
		putchar(al);
		al++;
	}
                putchar('\n');
                return (0);
}
