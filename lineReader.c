#include "shell.h"

/**
 * read_command - return void
 *
 * Return: buffer string
*/

char *read_command(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO))
		write(1, "$ ", 2);

	n = getline(&buffer, &buffer_size, stdin);

	if (n == -1)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}
