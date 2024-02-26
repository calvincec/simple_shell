#include "shl.h"

/**
 * removenewln - remove newline from input
 * usrinput - get user input
 * @input: the input buffer
 */
void removenewln(char *input) {
	int i = 0;
	while (input[i] != '\0') {
		if (input[i] == '\n') {
			input[i] = '\0';
			break;
		}
		i++;
	}
}

/**
 * usrinput - get user input
 * @input: the input buffer
 * @sze: the size of the buffer
 */
void usrinput(char **input, size_t *sze) {
	ssize_t num_chars = getline(input, sze, stdin);
	if (num_chars == -1) {
        if (feof(stdin)) {
            cout("\n");
            exit(1);
        } else {
            cout("Error while reading input.\n");
            exit(0);
        }
    }
    removenewln(*input); 
}
