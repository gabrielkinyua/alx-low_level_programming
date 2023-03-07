#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string containing the character
 * @c: character to be located in the string
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

