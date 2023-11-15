
#include "shell.h"

/* function starts here */

int main(void)
{
	char command[128];

	while(1)
	{
		showprompt();
		pickupcommand(command, sizeof(command));
		execute_command(command);
	}

	return 0;
}
