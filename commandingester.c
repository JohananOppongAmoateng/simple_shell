#include "shell.h"

void ingest_command(char *command,size_t size)
{
    if (fgets(command,size,stdin) == NULL){
        if (feof(stdin)){
            nojo_print("\n");
            exit(EXIT_SUCCESS);
        }
        else{
            nojo_print("Error while ingesting input.\n");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command,"\n")] = '\0';
}
