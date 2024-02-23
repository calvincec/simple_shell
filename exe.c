#include "shl.h"

void exe(char *input) {



    pid_t child_pid = fork(); 

    if (child_pid == -1) {
        perror("fork");
    } else if (child_pid == 0) {
        printf("Child process ID: %d\n", getpid());
    } else {
		printf("Parent process ID: %d\n", getpid());
        
    }
	free(input);

}