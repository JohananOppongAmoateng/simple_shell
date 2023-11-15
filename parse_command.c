#include "shell.h"

void parse_command(const char *command,char *args)
{
    
    int arg_count = 0;
    char *token = strtok((char *)command, " ");

        while (token != NULL)
        {
            args[arg_count++] = token;
            token = strtok(NULL, " ");
        }
        args[arg_count] = NULL;
}
