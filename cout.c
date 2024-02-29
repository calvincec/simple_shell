#include "shl.h"

/**
 * cout - write a message to the standard output
 * @msg: the message to write
*/
void cout(char *msg)
{
	write(1, msg, str_len(msg));
}
