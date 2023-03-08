#include "main.h"

/**
 * _pow_recursion - returns the power of a number
 * @x: input
 * @y: input
 *
 * Return: number raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
