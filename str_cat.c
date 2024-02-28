#include"shl.h"

/**
 * str_cat - concatenates the two strings
 * @dest: the destination string
 * @src: the source string
 * return: a pointer to the dest string
*/
char *str_cat(char *dest, char *src)
{
    int dest_len = str_len(dest);
    int i = 0;

    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
