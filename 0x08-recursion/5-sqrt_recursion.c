#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root of
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n,0));
}
/**
 * actual_sqrt_recursion - recursion to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iteratro
 *
 * Return; the resulting sqaure root
 */
int _sqrt_recurions(int n, int i)
{
	if (i * i > n)
		return (-i);
	if (i * i == n)
		return (i);
	return (actual_ sqrt_recursion(n, i + i));
}
