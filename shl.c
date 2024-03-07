#include "shl.h"

/**
 * mainy - entry point
 * Return: 0 on success
 */
int mainy(void)
{
	int ret;
	char *input;
	int is_piped = !isatty(fileno(stdin));
	size_t size = 1024;

	ret = 0;
	input = (char *) malloc(size + 1);
	do {
		prmt();
		usrinput(&input, &size);
		if (str_cmp(input, "exit") == 0)
			break;
		ret = exe(input);
		if (is_piped)
			break;
	} while (1);

	free(input);

	return (ret);
}

/**
 * mainyo - entry point
 * Return: 0 on success
 */
int mainyo(void)
{
	char input[1024];

	while (1)
	{
		printf("$ ");
		fgets(input, 1024, stdin);
	}
	return (0);
}

/**
 * mainyoo - entry point
 * Return: 0 on success
 */
int mainyoo(void)
{
	int is_piped = !isatty(fileno(stdin));

	if (is_piped)
	{
		char line[1024];

		printf("Input is coming from a pipe.\n");

		while (fgets(line, 1024, stdin) != NULL)
		{
			printf("Line: %s", line);
		}
	} else
	{
		printf("Input is coming from keyboard.\n");
	}

	return (0);
}

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	int ret;
	char *input;
	int is_piped = !isatty(fileno(stdin));
	size_t size = 1024;

	ret = 0;
	input = (char *) malloc(size + 1);

	if (is_piped)
	{
		char *commands[1024];
		int i = 0;
		int p;

		while (fgets(input, 1024, stdin) != NULL)
		{
			commands[i] = input;
			i++;
		}
		commands[i] = NULL;
		p = 0;
		for ( ; p < i ; p++)
		{
			removenewln(commands[p]);
			ret = exe(commands[p]);
		}
	}
	else
	{
		do {
			prmt();
			usrinput(&input, &size);
			if (str_cmp(input, "exit") == 0)
				break;
			ret = exe(input);
		} while (1);
	}
	free(input);
	return (ret);
}

