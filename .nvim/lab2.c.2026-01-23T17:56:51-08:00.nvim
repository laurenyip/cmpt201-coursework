#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
    while(1) {
        printf("enter programs to run.\n");
        printf("> ");

        char *line = NULL;
        size_t len = 0;
        ssize_t read;

        // Using getline() - works on POSIX systems
        read = getline(&line, &len, stdin);
        if (read != -1) {
            // Remove newline character
            line[strcspn(line, "\n")] = '\0';
            
            pid_t pid = fork();
            if (pid != 0){
                // Parent process
                pid_t wpid = waitpid(pid, NULL, 0);
                if(wpid == -1){
                    printf("ERROR waiting for PID\n");
                }
            } else {
                // Child process
                if (execl(line, line, NULL) == -1){
                    printf("Exec failure\n");
                    exit(EXIT_FAILURE);
                }
            }
            free(line); // Free the allocated memory
        } else {
            // End of input (Ctrl+D)
            free(line);
            return 0;
        }
    }
}
