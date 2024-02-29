#include "shl.h"

/**
 * at_oi - convert a string to an integer
 * @input: the string to convert to integer
 * Return: an integer array containing the flag and a result
 */
int *at_oi(char *input)
{
	int *result = malloc(3 * sizeof(int));
	int i, is_neg;

	is_neg = 0;
	i = 0;
	if (input[0] == '-')
	{
		is_neg = 1;
		i++;
	}


	for (; input[i] != '\0'; i++)
	{
		if (input[i] < '0' || input[i] > '9')
		{
			result[0] = 0;
			result[1] = 0;
			return (result);
		}
		result[1] = result[1] * 10 + input[i] - '0';
	}
	if (is_neg)
		result[1] = -result[1];
	result[0] = 1;

	return (result);
}

