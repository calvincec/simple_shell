#include "shl.h"

/**
 * str_cat - cancatenate strings just call it without assigning it
 * @dest: char pointer
 * @src: char pointer
 * Return: char pointer
 */
char *str_cat(char *dest, char *src)
{
	int dest_len = str_len(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
