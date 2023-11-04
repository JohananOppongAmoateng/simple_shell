#include "main.h"

int main()
{
    char *command[120];
    
    while (True)
    {
        display_prompt();
        read_commands(command,sizeof(command));
        execute_commands(command);
    }
}