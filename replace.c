#include "shl.h"


/**
 * replace - removes a string from another string and makes the new string not to start with space
 * @src: the source string
 * @dest: the destination string
 * @exception: the string to be removed from the source string
 * Return: 1 on success
 */

void replace(char *src, char *dest, char *exception)
{
	char exption[100];
    int i = 0, j = 0;
	int len_src;
    int len_exception;
    int remove_space;

	str_cpy(exption, exception);


	len_src = str_len(src);
	len_exception = str_len(exption);
	remove_space = 1;

	if (len_exception == 0)
	{
		str_cpy(dest, src);
		return;
	}


    for (i = 0; i < len_src; i++)
    {
        int match = 1;
		j = 0;
        for (; j < len_exception; j++)
        {
            if (src[i + j] != exption[j])
            {
                match = 0;
                break;
            }
        }

        if (match)
        {
            i += len_exception;
            while (src[i] == ' ')
                i++;
			remove_space = 0;
        }

        if (src[i] != ' ' || !remove_space)
        {
            *dest = src[i];
            dest++;
        }
    }

    *dest = '\0';
}

/**
 * main - entry point and tests the replace function
 * Return: 0 on success
 */
/*

int main()
{
    char src[] = "Hello World! my good person     i love you";
    char dest[100] = "";
    char exception[] = "Hello World!";
    printf("Source string:%s\n", src);
    replace(src, dest, exception);
    printf("Source string:%s\n", src);
    printf("Destination string:%s\n", dest);
	printf("Exception string:%s\n", exception);
    return 0;
}

*/
