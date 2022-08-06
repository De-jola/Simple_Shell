#ifndef SHELL_H
#define SHELL_H

#define BUFSIZE 1024
#define TOKEN_BUFSIZE 128
#define TOKEN_DELIM " \t\r\n\a"
#define EXIT_IND 2

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>

/**
 * struct shell - shell data for current session
 *
 * @argv: argument vector
 * @command: input command
 * @environ: env variables
 * @name: the program name
 * @count: counts number of processes
 * @exitcode: the value the code exits
 * @pid: pid of current process
 */
typedef struct shell
{
	char **argv;
	char *command;
	char **environ;
	char *name;
	int count;
	int exitcode;
	char *pid;
} shell_t;


#endif
