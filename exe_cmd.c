#include "shell.h"


/**
 * excute_cmd - excuting command that has been tokinzed
 * @cmd: double pointer command
 * @argv: double pointer arg
 * @in: indexing int
 *
 * Return: exit status value
*/

int excute_cmd(char **cmd, char **argv, int in)
{
	char *fl_cd;
	int status;
	pid_t pid;

	fl_cd = _getpath(cmd[0]);
	if (fl_cd == NULL)
	{
		_perror(argv[0], cmd[0], in);
		freearrays(cmd);
		return (127);
	}
	else
	{
		pid = fork();
		if (pid == 0)
		{
			if (execve(fl_cd, cmd, environ) == -1)
			{
				freearrays(cmd);
				free(fl_cd);
				fl_cd = NULL;
			}
		}
		else
		{
			wait(&status);
			freearrays(cmd);
			free(fl_cd);
			fl_cd = NULL;
		}
	}
	return (WEXITSTATUS(status));
}
