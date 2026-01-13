#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char* line = NULL;
  size_t len = 0;
  ssize_t read;

  char *token;
  char *saveptr;

  while(1){
    printf("enter some text :3");
    read = getline(&line, &len, stdin);
    
    if (read==-1) break;
{
    printf("Tokens:\n");
    token=strtok_r(line, " ", &saveptr);
    while(token != NULL){
      printf(" %s\n", token);
      token = strtok_r(NULL, " ", &saveptr);
    

  }

  }
free(line);
return 0;


}

}
