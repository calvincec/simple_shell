#include "shl.h"

void exe(char *input) {
	pid_t child_pid;

    char **argvec;
	if(str_len(input) == 0)
		return;

	argvec = str_tok(input, " ");

	if(path_get(argvec[0]) == NULL)
	{
		cout("Command not found\n");
		return;
	}

    child_pid = fork(); 

    if (child_pid == -1) {
        cout("Error forking process.\n");
        exit(0);
    } else if (child_pid == 0) {
        /* child process */
       execve(path_get(argvec[0]), argvec, NULL);
       cout("error executing command. \n");
       exit(0);
       
    } else {
        /* parent process */
		wait(NULL);
    }
}
