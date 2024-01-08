#include "shell.h"

/**
 * excute_cmd - excuting command that has been tokinzed
 * @cmd: double pointer command
 * @argv: double pointer arg
 *
 * Return: exit status value
*/

int excute_cmd(char **cmd, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(argv[0]);
			freearrays(cmd);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
		freearrays(cmd);
	}
	return (WEXITSTATUS(status));
}
