#include "shl.h"

/**
 * str_dup - duplicate a string
 * @input: the string to duplicate
 * Return: a pointer to the new string
*/
char *str_dup(char *input)
{
	char *output = malloc(str_len(input) + 1);

	if (output == NULL)
		return (NULL);
	str_cpy(output, input);
	return (output);
}
