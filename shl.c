#include "shl.h"

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	char *input;
	size_t size = 132;

	input = (char *) malloc(size + 1);
	do {
		prmt();
		usrinput(&input, &size);
		if (str_cmp(input, "exit") == 0)
			break;
		exe(input);
	} while (1);

	free(input);

	return (0);
}


/**
 * nothing - SUGGESTED IMPROVEMENTS/ POSSIBLE BUGS
 * remember to free the input buffer
 * remember to free the location buffer(containing the path to the command)
*/
