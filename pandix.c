#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main() {

    char command[256];

    printf("╔════════════════════════════╗\n");
    printf("║ PANDIX 0.0.2a              ║\n");
    printf("╚════════════════════════════╝\n");
    printf("Use the command 'help' for seeing a full list of commands, or use 'exit' to leave the program\n");

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
            printf("Pandix 0.0.2a");
        }

        else if (strcmp(command, "help") == 0) {
            printf("Command list\n");
            printf("exit       Leave the program\n");
            printf("e          Leave the program\n");
            printf("version    See the version of the program\n");
            printf("fetch      See the system's details\n");
            printf("sudo       Super-user actions\n");
            printf("ls         Check your files\n");
            printf("cd         Go on a new directory\n");
            printf("cat        Catenate a file\n");
            printf("sudo hack  HECKINGGGGGG\n");
            printf("clear      Clear your terminal full of shit\n");
            printf("whoami     If you forgotted who are u\n");
            printf("cowsay     A FRICKIN COW THAT TALKS\n");
            printf("ping       Ping a website or smth\n");
            printf("Note: there are some easter egg commands that aren't listed here");
        }

        else if (strcmp(command, "fetch") == 0) {
            printf(" /\\_/\\ <Meow meow mf\n");
            printf("/ ·_. \\\n");
            printf("OS: Pandix 0.0.2a\n");
            printf("Host: Your computer\n");
            printf("Kernel: N/A\n");
            printf("RAM: Idk\n");
            printf("CPU: Idk");
        }

        else if (strcmp(command, "sudo hack") == 0) {
            printf("Ok twin, gonna hack 4 u\n");
            sleep(1);
            printf("Hacking militar bases in Tel Aviv...\n");
            sleep(3);
            printf("Coding Hello World(''print'') on Python to successfully hack Tel Aviv\n");
            sleep(3);
            printf("Mega haxxing on Kali Linux (very tuff larp)\n");
            sleep(1);
            printf("Yes twin, u hecked nasa twin");
        }

        else if (strncmp(command, "sudo make me a sandwich", 23) == 0) {
            printf("Okay.");
        }

        else if (strcmp(command, "sudo apt install opsec") == 0) {
            printf("Searching for the package on the Pandix's repos in Tel Aviv, Israel...\n");
            sleep(3);
            printf("Found a package\n");
            sleep(1);
            printf("Installing dependencies for 'opsec'...\n");
            sleep(5);
            printf("Installing 'opsec'...\n");
            sleep(3);
            printf("Package 'opsec' succesfully installed!");
        }

        else if (strncmp(command, "sudo", 4) == 0) {
            printf("User is not in the sudoers file\n");
            printf("This incident will be reported to Linus freakin' Torvalds");
        }

        else if (strncmp(command, "ls", 2) == 0) {
            printf("../\n");
            printf(".cache/\n");
            printf(".config/\n");
            printf(".lolcat/\n");
            printf("Downloads/\n");
            printf("Documents/\n");
            printf("Images/\n");
            printf("Music/\n");
            printf("Videos/\n");
            printf("minecraft.rar");
        }

        else if (strncmp(command, "cd", 2) == 0 &&
                 (command[2] == ' ' || command[2] == '\0')) {
            printf("This function is only avaidable for root users (dev is just 2 lazy to program ts)");
        }

        else if (strcmp(command, "unrar minecraft.rar") == 0) {
            printf("Bro, why are u using RAR twin, use Gzip, Tarball or 7-Zip twin, don't use microslop propetiary software twin");
        }

        else if (strncmp(command, "unrar", 5) == 0 &&
                 (command[5] == ' ' || command[5] == '\0')) {
            printf("There is no such RAR file with that name");
        }

        else if (strcmp(command, "cat minecraft.rar") == 0) {
            printf("Meow.\n");
            printf("Binary file detected.\n");
            printf("My cat brain can't read this");
        }

        else if (strncmp(command, "cat", 3) == 0) {
            printf("Meow, I'm a cat, what did you expect?");
        }

        else if (strcmp(command, "clear") == 0) {
            system("clear");
        }

        else if (strcmp(command, "whoami") == 0) {
            printf("You are: a local idiot");
        }

        else if (strcmp(command, "cowsay") == 0) {
            printf(" __________\n");
            printf("< fuck you >\n");
            printf(" ----------\n");
            printf("        \\   ^__^\n");
            printf("         \\  (oo)\\_______\n");
            printf("            (__)\\       )\\/\\\n");
            printf("                ||----w |\n");
            printf("                ||     ||");
        }

        else if (strcmp(command, "apt") == 0) {
            printf("Unrecognized command: apt\n");
            printf("Did you mean: sudo apt install opsec");
        }

        else if (strncmp(command, "ping", 4) == 0) {
            printf("Pinging website...\n");
            sleep(3);
            printf("ERROR 403: Forbidden");
        }

        else {
            printf("Unrecognized command: '%s'\n", command);
            printf("Use 'help' for seeing a full list of commands");
        }

        printf("\n");
    }

    return 0;
}
