#ifndef SHELL_H
#define SHELL_H

/* general c header files */

#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdbool.h>

/*prototypes */
void printit(const char *info);
void showprompt();
void pickupcommand(command, sizeof(command));
void execute_command(command);
char *token = strtok((char *)command, " "); 






#endif /* SHELL_H */
