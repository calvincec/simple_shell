#include "shl.h"

/**
 * str_cmp - compare two strings to ensure they are same
 * @str1: first string
 * @str2: second string
 * Return: 0 if the strings are the same, -1 if not
 */
int str_cmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (-1);
		i++;
	}
	if (str1[i] != str2[i])
		return (-1);
	return (0);
}
