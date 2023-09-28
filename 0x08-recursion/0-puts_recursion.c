#include "main.h"

/**
 * _puts_recursion -  function that prints a string,
 * followed by a new line
 * @s: input
 * Return: Always 0 (Success)
 */
Void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
