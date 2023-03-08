#include "main.h"
/**
 * main - puts_character to print recursive
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar("\n");
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
