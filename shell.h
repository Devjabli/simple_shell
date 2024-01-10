#ifndef SHELL_H
#define SHELL_H


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"
#define MSG ": not found\n"
extern char **environ;


char **allocate_and_copy(char *line, int token_count);
char *_getenv(char *var);
char *_getpath(char *cmd);
int count_tokens(char *line);
char *_itoa(int n);
void rev_str(char *str, int len);


int _strncmp(const char *s1, const char *s2, size_t n);
void freearrays(char **arr);
void _perror(char *name, char *cmd, int in);
int check_builtin(char *cmd);
void ha_builtins(char **cmd, char **argv, int status, int in);

char *read_command(void);
char **spliters(char *line);
int excute_cmd(char **cmd, char **argv, int in);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
#endif
