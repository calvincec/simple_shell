#ifndef SHL_H
#define SHL_H
/*
 *The headers
 */
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
<<<<<<< HEAD
#include <stdbool.h> 
=======
#include <stdbool.h>
>>>>>>> 3d99ace5fc7435ef99cb0026eafed0dd13c68f36
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
<<<<<<< HEAD
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


=======


char **str_tok(char *str, char *d);
void cout(char *msg);
void prmt(void);
void usrinput(char **input, size_t *sze);
void exe(char *input);
void removenewln(char *input);
void str_cpy(char *dest, char *src);
int str_len(char *s);
char *path_get(char *cmd);
char *str_cat(char *dest, char *src);
void free_ls(char **a);
char *str_dup(char *input);
int isde(char tocheck, char *de);
int str_cmp(char *s1, char *s2);
ssize_t get_line(char **lineptr, size_t *n);
>>>>>>> 3d99ace5fc7435ef99cb0026eafed0dd13c68f36

#endif /* SHL_H */
