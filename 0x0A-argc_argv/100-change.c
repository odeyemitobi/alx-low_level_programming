#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the least number of cents to
 * create change for a sum of money
 * @argc: the parameter count passed to the program
 * @argv: The argument data provided
 * Return: 1 if the number of arguments is exactly not
 * or 0 in otherwise
 */
int main(int argc, char **argv)
{
	int sum, cents = 0;

	if (argc == 2)
	{
		sum = atoi(argv[1]);
		if (sum < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (sum % 25 >= 0)
		{
			cents += sum / 25;
			sum = sum % 25;
		}
		if (sum % 10 >= 0)
		{
			cents += sum / 10;
			sum = sum % 10;
		}
		if (sum % 5 >= 0)
		{
			cents += sum / 5;
			sum = sum % 5;
		}
		if (sum % 2 >= 0)
		{
			cents += sum / 2;
			sum = sum % 2;
		}
		if (sum % 1 >= 0)
			cents += sum;
		printf("%d\n", cents);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

