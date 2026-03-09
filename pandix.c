#include <stdio.h>
#include <string.h>

int main() {
	char command[256];
	printf("  ╔════════════════════════════╗\n  ║ PANDIX 0.0.1a              ║\n  ╚════════════════════════════╝\nUse the command 'help' for seeing a full list of commands, or use 'exit' to leave the program\n");
	while (1) {
		printf("> ");
		fflush(stdout);
		if (fgets(command, sizeof(command), stdin) == NULL) {
			printf("Bye!\n");
			break;
		}

		command[strcspn(command, "\n")] = 0;

		if (strcmp(command, "e") == 0 || strcmp(command, "exit") == 0) {
			printf("Bye!\n");
			break;
		}
		else if (strcmp(command, "version") == 0) {
			printf("Pandix 0.0.1a");
		}
		else if (strcmp(command, "help") == 0) {
			printf("Command list\nexit      Leave the program\ne         Leave the program\nversion   See the version of the program\nfetch     See the system's details");
		}
		else if (strcmp(command, "fetch") == 0) {
			printf(" /\\_/\\ <Meow meow mf\n/ ·_. \\\nOS: Pandix 0.0.1a\nHost: Your computer\nKernel: N/A\nRAM: Idk\nCPU: Idk");
		}
		else {
			printf("Unrecognized command: '%s'\n", command);
			printf("Use 'help' for seeing a full list of commands\n");
		}
		printf("\n");
	}
	return 0;
}
