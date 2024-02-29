#include "shl.h"

/**
 * exe - execute a command
 * @input: the command to execute
 * Return: void
 */
int exe(char *input)
{
	pid_t child_pid;
	char **argvec;
	int shell_status;

	if (str_len(input) == 0)
		return (0);

	argvec = str_tok(input, " ");
	shell_status = exit_shell(argvec, input);
	if (shell_status){
		free_ls(argvec);
		return (1);
	}

	if (path_get(argvec[0]) == NULL)
	{
		free_ls(argvec);
		cout("Command not found\n");
		return (127);
	}

	child_pid = fork();

	if (child_pid == -1)
	{
		free_ls(argvec);
		cout("Error forking process.\n");
		return (1);
	}
	else if (child_pid == 0)
	{
		/* child process */
		free(input);
		execve(path_get(argvec[0]), argvec, NULL);
		free_ls(argvec);
		cout("error executing command. \n");
		input = (char *) malloc(1);
		return (126);
	}
	else
	{
		/* parent process */
		wait(NULL);
	}

	free_ls(argvec);

	return (1);
}
