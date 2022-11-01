#include "main.h"
/**
 * _strchr - locate a character
 * @s: the string we look thru
 * @c: the character we look for
 * @NULL: if the character is not found
 *
 * Return: a pointer to the character or NULL
 *
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
