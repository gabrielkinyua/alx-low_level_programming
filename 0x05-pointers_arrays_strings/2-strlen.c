#include "main.h"

/**
 * _strlen - calculate length of a string
 * @s:string
 * Return: lenght
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}
