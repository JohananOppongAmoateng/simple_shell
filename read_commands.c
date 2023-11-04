#include "main.h"

void read_commands(char *command,size_t size)
{
    if (fgets(command,size,stdin) == NULL){
        if (feof(stdin)){
            _print("\n");
            exit(EXIT_SUCCESS);
        }
        else{
            _print("Error while reading output.\n");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command,"\n")] = '\0';
}