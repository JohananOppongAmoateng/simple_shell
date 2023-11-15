#include "shell.h"

/* void execute_command - does the execution */

void execute_command(const char *command)
{
	/* we use the pid_t to create the child process */

	pid_t baby_pid = fork();

	if(baby_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (baby_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else 
	{
		wait (NULL);
	}
}

