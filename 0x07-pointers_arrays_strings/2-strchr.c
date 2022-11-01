#include "main.h"
/**
 * _strchr - locate a character
 * @s: the string we look thru
 * @c: the character we look for
 *
 * @NULL: if the character is not found
 *
 * Return: a pointer to the character or NULL
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
