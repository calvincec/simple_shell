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
#include <unistd.h>



/*
 *Function prototypes
 */

void cout(const char *msg);
void prmt();
void usrinput(char *input, size_t sze);
void exe(char *input);



#endif /* SHL_H */
