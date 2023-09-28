#include "main.h"
int _sqrt_cal(int n, int num);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_cal(n, 1));
}
/**
 * _sqrt_cal - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @num: iterator
 *
 * Return: the resulting square root
 */

int _sqrt_cal(int n, int num)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (num * num == n)
	{
		return (num);
	}
	else if (num * num > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_cal(n, num + 1));
	}
}
