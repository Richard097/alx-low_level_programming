#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	(void) argv;
		printf("%d\n", argc - 1);
	return (0);
}
