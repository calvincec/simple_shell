#include "shl.h"


/**
 * str_tok - tokenize a string
 * @str: the string to tokenize
 * @de: the delimiter
 * Return: an array of strings
 */
char **str_tok(char *str, char *de)
{
	int strc, wordc, wordloop, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (strc = 0; str[strc] != '\0'; strc++)
		if ((!isde(str[strc], de) && isde(str[strc + 1], de)) ||
			(!isde(str[strc], de) && str[strc + 1] == '\0'))
			numwords++;
	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (strc = 0, wordc = 0; wordc < numwords ; wordc++)
	{
		while (isde(str[strc], de) && str[strc] != '\0')
			strc++;
		wordloop = 0;
		while (!isde(str[strc + wordloop], de) && str[strc + wordloop] != '\0')
			wordloop++;
		s[wordc] = malloc((wordloop + 1) * sizeof(char));
		if (!s[wordc])
		{
			for (wordloop = 0; wordloop < wordc; wordloop++)
				free(s[wordloop]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < wordloop; m++)
			s[wordc][m] = str[strc++];

		s[wordc][m] = '\0';
		if (str[strc] == '\0')
			break;
	}
	s[numwords] = NULL;
	return (s);
}

/**
 * isde - checks if a character is a delimiter
 * @tocheck: the character to check
 * @de: the delimiter
 * Return: 1 if it is a delimiter, 0 if not
*/
int isde(char tocheck, char *de)
{
	int i;

	for (i = 0; de[i]; i++)
		if (tocheck == de[i])
			return (1);
	return (0);
}

/**
 * notning - POSSIBLE ERRORS/SUGGESTIONS
 * remember to free up memory(the array returned by str_tok) after using it
 * always use free_ls to free up memory for the array returned by strtow
*/
