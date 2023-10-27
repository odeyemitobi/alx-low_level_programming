#include <stdio.h>

/**
 * main - Outputs the name of the program, afterwhich a newline follows
 * @argc: The count of arguments provided to the program.
 * @argv: A collection of pointers to the program's arguments.
 *
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
