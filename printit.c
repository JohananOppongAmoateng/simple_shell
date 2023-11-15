# include "shell.h"

/* void printit - a function that writes out an info after command is entered
 * return - none for now 
 * write - a standard output directive
 * */

void printit(const char *info)
{
	write(STDOUT_FILENO, info, strlen(info));
}
