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
int exe(char *input);
void removenewln(char *input);
void str_cpy(char *dest, char *src);
void free_ls(char **a);
char **str_tok(char *str, char *d);
char *str_cat(char *dest, char *src);
int str_len(char *s);
char *str_dup(char *input);
int isde(char tocheck, char *de);
int str_cmp(char *s1, char *s2);
ssize_t get_line(char **lineptr, size_t *n);
char *path_get(char *cmd);
int *at_oi(char *input);
int exit_shell(char **input, char *input_str);

/* from Whitney */





#endif /* SHL_H */
