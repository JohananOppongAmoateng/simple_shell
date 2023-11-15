#include "shell.h"

void pickupcommand(char *command, size_t size)
{
	if(fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			noj_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			noj_print("Error while picking input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
