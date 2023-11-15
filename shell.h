#ifndef SHELL_H
#define SHELL_H

/* Constant Variables */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>

/* created function prototypes */


void prompt_displayer(void);
void nojo_print(const char *letyouknow);
void kickeroff_command(const char *command);
void ingest_command(char *command, size_t size);
void parse_command(const char *command,char *args);

#endif /* SHELL_H */
