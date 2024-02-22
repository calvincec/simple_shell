#include "shl.h"

/**
 * main - entry point
 * Return: 0 on success
 */
int main() {
	char *input;
	size_t size = 132;
	input = (char *) malloc (size + 1); 

	do
	{
		prmt();
		usrinput(input, size);
	} while (1);
	

	return 0;
}


/**
 * SUGGESTED IMPROVEMENTS/ POSSIBLE BUGS
 * remember to free the input buffer
*/