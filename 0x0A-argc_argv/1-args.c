#include "main.h"
#include <stdio.h>

/**
 * main - A program that display the count of arguments provided as input.
 * @argc: The parameter count passed to the program.
 * @argv: The argument data provided
 * Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
