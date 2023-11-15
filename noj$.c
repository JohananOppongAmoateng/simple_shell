#include "shell.h"

int main()
{
    char *command[120];
    
    while (True)
    {
        prompt_displayer();
        ingest_command(command,sizeof(command));
        kickoff_command(command);
    }
    
    return(0);
}
