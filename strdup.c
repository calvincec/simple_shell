#include "shl.h"


char *str_dup(char *input)
{
	char *output = malloc(str_len(input) + 1);
	if (output == NULL)
		return NULL; 
	str_cpy(output, input); 
	return output; 
}
