#include "shl.h"

/**
 * str_len - length of string
 * @s: string input
 * Return: int
 */
int str_len(char *s)
{
	int i = 0;

	for ( ; *s != '\0'; i++, s++)
		;


	return (i);
}

/**
 * str_cpy - copy string
 * @dest: destination string
 * @src: source string
 */
void str_cpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
