#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void)
{
	char *buffer = NULL, copy_buffer = NULL;
	size_t n = 0;
	char *token;
	char *delim = " \n";
	int ntokens = 0, i = 0;
	char **argv;



	printf("$ ");

	getline(&buffer, &n, stdin);

	printf(">>>>> %s\n", buffer);


	/*copy the string copy*/
	strcpy(copy_buffer, buffer);

	/*get the number of tokens to be created*/

	token = strtok(buffer, delim);
	while(token != NULL)
	{
		token = strtok(NULL, delim);
		ntokens++;
	}
	ntokens++;

	argv = malloc(sizeof(char *) * ntokens);

	/*get the tokens and save them as arguments in argv*/

	token = strtok(copy_buffer, delim);
	while(token != NULL)
	{
		/*allocate space for each token */
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);
		
		i++;
		token = strtok(NULL, delim);
	}

	argv[i] = NULL;

}
