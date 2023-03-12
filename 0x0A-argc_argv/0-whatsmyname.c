#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program
 * @argc: argument count
 * @argv: argument vector
 *
 *  Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
