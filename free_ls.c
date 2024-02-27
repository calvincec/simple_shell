#include "shl.h"

/**
 * free_ls - free the memory allocated for an array of strings
 * @a: the array of strings
 */

void free_ls(char **a)
{
	int i;

	if (a == NULL)
		return;
	while (a[i])		
	{
		free(a[i]);
		i++;
	}
	free(a);
}