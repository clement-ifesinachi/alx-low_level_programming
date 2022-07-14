#include "main.h"
#include <string.h>

/**
 * _strncat -> concatenates two strings but addinputted number of bytes
 * @dest: string to be appended on
 * @src: string to be completed at the end of the dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
