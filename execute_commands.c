#include "main.h"

void execute_commands(const char *command)
{
    pid_t child_pid = fork();/* create a child process*/

    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
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
    else{
        /*parent process*/
        wait(NULL);
    }

}