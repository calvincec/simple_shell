#include "shl.h"

/**
 * get_line - get a line from the user using read and buffer
 * @buf: the buffer to read the line into
 * @len: the size of the buffer
 * Return: the number of characters read
*/
ssize_t get_line(char **buf, size_t *len)
{
	ssize_t num_chars = read(STDIN_FILENO, *buf, *len);

	if (num_chars == -1)
	{
		if (feof(stdin))
		{
			cout("\n");
			exit(1);
		}
		else
		{
			cout("Error while reading input.\n");
			exit(0);
		}
	}
	return (num_chars);
}


