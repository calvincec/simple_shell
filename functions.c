#include "shl.h"
int _errputchar(char chr)
{
	static int i;
	static char buffer[W_BUFF_SIZE];

	if (chr == BUFF_FLUSH || i >= W_BUFF_SIZE)
	{
		write(2, buffer, i);
		i = 0;
	}
	if (chr != BUFF_FLUSH)
		buffer[i++] = chr;
	return (1);
}



void _errputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

int _eatoi(char *str)
{
	int k = 0;
	unsigned long int result = 0;

	if (*str == '+')
		str++;  /* TODO: why does this make main return 255? */
	for (k = 0;  str[k] != '\0'; k++)
	{
		if (str[k] >= '0' && str[k] <= '9')
		{
			result *= 10;
			result += (s[k] - '0');
			if (result > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (result);
}



