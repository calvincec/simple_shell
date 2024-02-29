#include "shl.h"

/**
 * exit_shell - exit the shell
 * @input: the input string
 * @input_str: the input string
 * Return: 0 on success
 */
int exit_shell(char **input, char *input_str)
{
	if (str_cmp(input[0], "exit") == 0)
	{
		if (input[1])
		{
			int success;
			int exit_status = 2;

			success = at_oi(input[1])[0];
			exit_status = at_oi(input[1])[1];
			if (success && !input[2])
			{
				free(input_str);
				cout("logout\n");
				exit(exit_status);
			}
			else if (!success)
			{
				free(input_str);
				cout("logout\n");
				cout("exit: ");
				cout(input[1]);
				cout(": numeric argument required\n");
				exit(2);
			}
			if (input[2])
			{
				cout("logout\n");
				cout("exit: too many arguments\n");
				return (1);
			}
		}
	}
	return (0);

}
