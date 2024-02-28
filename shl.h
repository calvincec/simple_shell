#ifndef SHL_H
#define SHL_H
/*
 *The headers
 */
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>




/*
 *Function prototypes
 */

void cout(char *msg);
void prmt();
void usrinput(char **input, size_t *sze);
void exe(char *input);
void removenewln(char *input);
void replace(char *src, char *dest, char *exception);
void str_cpy(char *dest, char *src);
int str_len(char *s);
char *get_location(char *command);
int _errputchar(char c);
void _errputs(char *str);
int _eatoi(char *str)
int my_exit(my_info *info);

#define R_BUFF_SIZE 1024
#define W_BUFF_SIZE 1024
#define BUFF_FLUSH -1

typedef struct original_info
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int sts/*status*/;

	char **cmd_buf; /* pointer to cmd ; chain buffer, for memory mangement */
	int cmd_buf_type; /* CMD_type ||, &&, ; */
	int readfd;
	int histcount;
} my_info;



#endif /* SHL_H */
