#include <stdio.h>
#include "main.h"

/**
 * main - prtints all arguments
 * @argc: counts arguments
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
