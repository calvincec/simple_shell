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
void usrinput(char *input, size_t sze) {
	char *var = fgets(input, sze, stdin);
	if (var == NULL) {
        if (feof(stdin)) {
            cout("\n");
            exit(1);
        } else {
            cout("Error while reading input.\n");
            exit(0);
        }
    }
    removenewln(input); 
}

/**
 * SUGGESTED IMPROVEMENTS/ POSSIBLE BUGS
 * fgets should not be used a speciefied by alx, try using getline instead
*/
