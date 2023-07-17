#include <stdio.h>
#include <stdlib.h>

char *pushToGit(char *message)
{
  char *command = malloc(100);

  sprintf(command, "git add . && git commit -m \"%s\" && git push origin master", message);
  system(command);

  return (command);
}

int main(int argc, char *argv[])
{
  char *message = argv[1];

  if (argc != 2)
	{
	  printf("Usage: ./cpsh <commit message>\n");
	  return (1);
	}

  pushToGit(message);

  return (0);
}

