#include <stdio.h>



int main(void)
{
	char *buffer = NULL;
	size_t n = 0;



	printf("$ ");

	getline(&buffer, &n, stdin);

	printf(">>>>> %s\n", buffer);


}
