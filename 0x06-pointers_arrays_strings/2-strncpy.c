#include "main.h"
#include <string.h>
/**
 * _strncpy -> function that copies a string
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: number of bytes copied
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
