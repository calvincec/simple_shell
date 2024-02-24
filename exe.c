#include "shl.h"

void exe(char *input) {



    pid_t child_pid = fork(); 

    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
       // printf("Child process ID: %d\n", getpid());
       char *my_args[120];
       int count=0;

       char *token = strtok((char*)input," ");
       while (token != NULL)
       {
        my_args[count++]=token;
        token = strtok(NULL, " ");
       }
       my_args[count]=NULL;
        //execute command
       execvp(my_args[0],my_args);

       cout("error executing command. \n");
       exit(EXIT_FAILURE);
       
    } else {
        //parent waits until the child is done executing
		wait(NULL);
        
    }
	free(input);

}