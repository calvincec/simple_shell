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
		usrinput(&input, &size);
		exe(input); 
	} while(1);

	free(input);
	

	/* test get_location */
	/*
	char *input[3];
	char *command = "ls";
	char *location = get_location(command);

	input[0] = "ls";
	input[1] = "-l";
	input[2] = NULL;
	if (location)
	{
		cout("Location: ");
		cout(location);
		cout("\n");
	}
	else
	{
		cout("Command not found\n");
	}
	execve(location, input, NULL);
	free(location);
	*/

	return 0;
}


/**
 * SUGGESTED IMPROVEMENTS/ POSSIBLE BUGS
 * remember to free the input buffer
 * remember to free the location buffer(containing the path to the command)
*/