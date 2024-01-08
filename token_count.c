#include "shell.h"

/**
 * count_tokens - Count the number of tokens in a string
 * @line: The string to be tokenized
 *
 * Return: The number of tokens in the string
 */
int count_tokens(char *line)
{
	char *tp = NULL;
	char *str = NULL;
	int cpt = 0;

	if (!line)
		return (0);

	tp = _strdup(line);

	str = strtok(tp, DELIM);
	if (str == NULL)
	{
		free(line), line = NULL;
		free(tp), tp = NULL;
		return (0);
	}

	while (str)
	{
		cpt++;
		str = strtok(NULL, DELIM);
	}
	free(tp), tp = NULL;
	return (cpt);
}
