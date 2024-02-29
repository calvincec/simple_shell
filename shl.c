#include "shl.h"

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	int ret;
	char *input;
	size_t size = 1024;

	ret = 0;
	input = (char *) malloc(size + 1);
	do {
		prmt();
		usrinput(&input, &size);
		if (str_cmp(input, "exit") == 0)
			break;
		ret = exe(input);
	} while (1);

	free(input);

	return (ret);
}



