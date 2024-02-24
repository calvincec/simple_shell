#include "shl.h"

/**
 * cout - write a message to the standard output
 * @msg: the message to write
*/
void cout(const char *msg) {
	write(STDOUT_FILENO, msg, strlen(msg));
}