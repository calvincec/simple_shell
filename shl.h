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




/*
 *Function prototypes
 */

char **str_tok(char *str, char *d);
void cout(char *msg);
void prmt();
void usrinput(char **input, size_t *sze);
void exe(char *input);
void removenewln(char *input);
void replace(char *src, char *dest, char *exception);
void str_cpy(char *dest, char *src);
int str_len(char *s);
char *path_get(char *cmd);
char *str_cat(char *dest, char *src);
void free_ls(char **a);
char *str_dup(char *input);
int isde(char tocheck, char *de);

#endif /* SHL_H */
