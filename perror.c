#include "shell.h"


/**
 * _perror - print error of not found
 * @name: pointer name str
 * @cmd: pointer command;
 * @in: index
*/

void _perror(char *name, char *cmd, int in)
{
	char *i;

	i = _itoa(in);

	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, i, _strlen(i));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, MSG, _strlen(MSG));
	free(i);
}
