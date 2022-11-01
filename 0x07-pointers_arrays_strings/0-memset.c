#include "main.h"
/**
 * _memset - functionbtha fill memory
 * @a: an int
 * @b: another int
 * @s: another integer
 * @n: an integer also
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
