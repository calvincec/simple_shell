#include "shl.h"

void exe(char *input) {



    pid_t child_pid = fork(); 

    if (child_pid == -1) {
        cout("Error forking process.\n");
        exit(0);
    } else if (child_pid == 0) {
       /*child process*/
       char *argvec[120];
       int count=0;

       char *token = strtok((char*)input," ");
       while (token != NULL)
       {
        argvec[count++]=token;
        token = strtok(NULL, " ");
       }
       argvec[count]=NULL;
	   /*print my_args*//*
	   cout("argvec: ");
	   for(; i<count; i++){
		   cout(argvec[i]);
		   cout("\n");
	   }
	   */
	   
        /* execute command */
		if (argvec[0] == NULL)
			exit(0);
		
       execve(get_location(argvec[0]), argvec, NULL);

       cout("error executing command. \n");
       exit(0);
       
    } else {
        /* parent process */
		wait(NULL);
        
    }

}