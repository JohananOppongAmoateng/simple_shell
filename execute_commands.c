#include "shell.h"

/* prototype for executing commands */

void kickoff_command(const char *command)
{
    pid_t baby_pid = fork();
    /* create a child process*/

    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (baby_pid == 0)
    {
        /*child process*/
        char *args[128];

        /*parse the command and its arguments*/
        parse_command(command,args)
        
        // execlp(command,command,(char *)NULL);
        execlp(args[0],args);
        // perror("execlp");
        _print("Error executing command.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        /*parent process*/
        wait(NULL);
    }

}
