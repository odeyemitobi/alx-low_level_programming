#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction (a - b)
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the multiplication (a * b)
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: Numerator
 * @b: Denominator
 *
 * Return: Result of the division (a / b)
 *         If division by zero, print an error message and return 0.
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero.\n");
		return (0);
	}
}

/**
 * mod - Computes the modulus of two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Result of the modulus (a % b)
 *         If modulus by zero, print an error message and return 0.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulus by zero.\n");
		return (0);
	}
}
