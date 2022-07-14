#include "main.h"

/**
 * _strcat - concatenates the string pointedt to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i]; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	return (dest);
}
