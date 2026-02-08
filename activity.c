#include <stdio.h>
#include <unistd.h>

int main() {
  execl("/bin/ls", "-a");
  int ret = fork();
  execl("/bin/ls", "/bin/ls", "-a", NULL);
  printf("done\n");
}
