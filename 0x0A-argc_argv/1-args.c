#include <stdio.h>
#include "main.h"

/**
 * main - prints no. of arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 *Return: Always 0 (sucsess)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc - 1);
	return (0);
}

