#include "shell.h"
/**
 * execute function reused
 * *token -split functions into parts
 * parsing strings down below
 * */

void execute_command(const char *command)
{
    pid_t baby_pid = fork();

    if (baby_pid == -1) {
        noj_print("Error forking process.\n");
        exit(EXIT_FAILURE);
    }
    else if (baby_pid == 0)
    {
        // Child process

        // Parse the command and its arguments
        char *args[128]; 
	// Maximum 128 arguments (adjust as needed)
        int arg_count = 0;

        char *token = strtok((char *)command, " ");
        while (token != NULL)
       	{
            args[arg_count++] = token;
            token = strtok(NULL, " ");
        }
        args[arg_count] = NULL; // Null-terminate the arguments array

        // Execute the command
        execvp(args[0], args);

        // If execvp fails, print an error message
        noj_print("Error executing command.\n");
        exit(EXIT_FAILURE);
    } 
    else
    {
        // Parent process
        wait(NULL);
    }
}
