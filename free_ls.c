#include "shl.h"

/**
 * free_ls - free the memory allocated for an array of strings
 * @a: the array of strings
 */

void free_ls(char **a)
{
	int i = 0;

	while (a[i])
	{
		free(a[i]);
		i++;
	}
	if (i == 0)
		return;

	free(a);
}
