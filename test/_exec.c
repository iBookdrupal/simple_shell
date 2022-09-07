#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - entry point
* @argc: argument count
* @argv: argument variable
*/


int main (int argc, char *argv[])
{
	char *newargv[] = {NULL, "hello", "world", NULL};
	char *newenviron[] = { NULL };

	if (argc != 2)
	{
		fprintf(stderr, "Isage: %s <file-to-exec> \n");
		exit(EXIT_FAILURE);
	}

	newargv[0] = argv[1];

	execve(argv[1], newargv, newenviron);
	perror("execve"); 
	exit(EXIT_FAILURE);
}
