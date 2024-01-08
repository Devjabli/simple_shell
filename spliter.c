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
	int token_count;
	char **command;

	token_count = count_tokens(line);
	if (token_count <= 0)
		return (NULL);

	command = allocate_and_copy(line, token_count);

	free(line);
	return (command);
}
