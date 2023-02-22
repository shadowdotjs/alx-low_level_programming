#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Function to print alphabets
 */
	void print_alphabet(void)
	/*function to print lower case alphabets*/
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
