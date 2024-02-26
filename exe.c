#include "shl.h"

void exe(char *input) {

	char ** argv = {NULL};
	
	/* char *cmd; */
    pid_t nxt_pid = fork();
	/* print input using printf */
	printf("input: %s\n", input);
	/* print nxt_pid using printf */
	printf("nxt_pid: %d\n", nxt_pid);


    if (nxt_pid == -1) {
        cout("Error forking process.\n");
        exit(0);
    } else if (nxt_pid == 0) {
		/*child process*/
		int i = 0;
		int j = 0;
        char *token;
		char input2[1080];
		replace(input, input2, "");
		token = strtok((char *)input2, " ");

		replace(input, input2, token);
		printf("token: %s\n", token);

		/* cmd = token; */


		/* print input using printf */
		cout("input: ");
		cout(input);
		cout("\n");

		cout("input2: ");
		cout(input2);
		cout("\n");
		
		cout("token: ");
		cout(token);
		cout("\n");



        while (token != NULL) {
			cout("token: ");
			cout(token);
			cout("\n");
			argv[i++] = token;
            token = strtok(NULL, " ");
        }

		argv[i] = NULL;
		
		for (; j < i; j++)
		{
			cout(argv[j]);
		}
		execve(argv[0], argv, NULL);
		cout("Error executing command.\n");
		exit(0);
		
    } else {
		/*parent process*/
		wait(NULL);        
    }
	

}



/**
 * SUGGESTED IMPROVEMENTS/ POSSIBLE BUGS
 * replace strdup with custom function
*/