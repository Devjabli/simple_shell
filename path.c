#include "shell.h"

/**
 * _getpath - return command and add in last directory
 * @cmd: pointer command
 *
 * Return: return full path as command
 */

char *_getpath(char *cmd)
{
	char *pathenv, *d = NULL, *fl_cmd;
	int i = 0;
	struct stat st;

	while (cmd[i])
	{
		if (cmd[i] == '/' && d == NULL)
		{
			if (stat(cmd, &st) == 0)
				return (_strdup(cmd));
			return (NULL);
		}
		else
		{
			pathenv = _getenv("PATH");
			if (pathenv == NULL)
				return (NULL);
			d = strtok(pathenv, ":");
			while (d != NULL)
			{
				fl_cmd = malloc(_strlen(d) + _strlen(cmd) + 2);
				if (fl_cmd)
				{
					_strcpy(fl_cmd, d);
					_strcat(fl_cmd, "/");
					_strcat(fl_cmd, cmd);
					if (stat(fl_cmd, &st) == 0)
					{
						free(pathenv);
						return (fl_cmd);
					}
					free(fl_cmd), fl_cmd = NULL;
					d = strtok(NULL, ":");
				}
			}
			free(pathenv);
			return (NULL);
		}
	}
	return (NULL);
}
