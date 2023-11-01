#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* Prevent unused variable warning */

	printf("%d\n", argc - 1);

	return (0);
}
