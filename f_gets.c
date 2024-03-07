#include "shl.h"

char *custom_fgets(char *buffer, int size, FILE *stream) {
	char *newline;
    int bytesRead = read(fileno(stream), buffer, size - 1);
    if (bytesRead <= 0) {
        return NULL;
    }

    buffer[bytesRead] = '\0';

	newline = strchr(buffer, '\n');
    if (newline != NULL) {
        *newline = '\0';
    }

    return buffer;
}
