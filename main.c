#include "shell.h"

/**
 * main - Entry point
 * @ac: casted parameter now
 * @argv: argv parameter pointer
 *
 * Return: status exit of operationd
 */

int main(int ac, char **argv)
{
	char *line = NULL;
	char **cmd = NULL;
	int status = 0;
	(void)ac;

	do {
		line = read_command();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		cmd = spliters(line);
		if (!cmd)
			continue;
		status = excute_cmd(cmd, argv);
	} while (1);
}
