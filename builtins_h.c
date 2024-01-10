#include "shell.h"

/**
 * check_builtin - check if there is same command
 * @cmd: command to compare with local string
 *
 * Return: return 0
*/

int check_builtin(char *cmd)
{
	if (_strncmp(cmd, "exit", 4) == 0)
		return (1);
	return (0);
}


/**
 * ha_builtins - handling builntins env and exit
 * @cmd: command to compare
 * @argv: paramater argv
 * @status: check for return status
 * @in: index
*/

void ha_builtins(char **cmd, char **argv, int status, int in)
{
	(void)argv;
	(void)in;

	if (_strncmp(cmd[0], "exit", 4) == 0)
	{
		freearrays(cmd);
		exit(status);
	}
}
