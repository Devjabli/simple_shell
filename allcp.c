#include "shell.h"

/**
 * allocate_and_copy - Allocate memory and copy tokens into an array
 * @line: The string to be tokenized
 * @token_count: The number of tokens in the string
 *
 * Return: An array of tokens
 */
char **allocate_and_copy(char *line, int token_count)
{
	char *str = NULL;
	char *tp = NULL;
	char **command = NULL;
	int i = 0;
	int sizeAddNull = 0;

	token_count ? (sizeAddNull += token_count) : NULL;
	if (!line || token_count <= 0)
		return (NULL);
	tp = _strdup(line);
	if (!tp)
		return (NULL);

	command = malloc(sizeof(char *) * sizeAddNull);
	if (!command)
	{
		free(tp);
		return (NULL);
	}

	str = strtok(line, DELIM);
	while (str)
	{
		command[i] = _strdup(str);
		str = strtok(NULL, DELIM);
		i++;
	}
	free(line), line = NULL;
	command[i] = NULL;
	return (command);
}
