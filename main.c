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
	char *str = NULL;
	char **cmd = NULL;
	int status = 0, in = 0;
	(void)ac;

	do {
		str = read_command();
		if (str == NULL)
		{
			isatty(STDIN_FILENO) ? write(STDOUT_FILENO, "\n", 1) : 0;
			return (status);
		}

		in++;
		cmd = spliters(str);
		if (cmd == NULL)
			continue;
		if (check_builtin(cmd[0]))
			ha_builtins(cmd, argv, status, in);
		else
			status = excute_cmd(cmd, argv, in);
	} while (1);
}
