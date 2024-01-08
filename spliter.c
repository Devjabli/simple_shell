#include "shell.h"

/**
 * spliters - split the array and remove delimeters
 * and return string as in array
 *
 * @line: line pointer string to spliter
 *
 * Return: return command as string without delimeters
*/

char **spliters(char *line)
{
	char *str = NULL;
	char *tp = NULL;
	char **command = NULL;
	int cpt = 0, i = 0;

	if (!line)
		return (NULL);
	tp = _strdup(line);

	str = strtok(tp, DELIM);
	if (str == NULL)
	{
		free(line), line = NULL;
		free(tp), tp = NULL;
		return (NULL);
	}
	while (str)
	{
		cpt++;
		str = strtok(NULL, DELIM);
	}
	free(tp), tp = NULL;
	command = malloc(sizeof(char *) * (cpt + 1));
	if (!command)
	{
		free(line), line = NULL;
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
