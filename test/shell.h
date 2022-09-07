#ifndef _SHELL_H
#define _SHELL_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>


/*Initial size of buffer for user */
#define READ_BUF 1000

/* shell utility function */
void ctrl_C(int);

char *_getline(void);

/* shell helper function */
int print(char *, int);

/* shell string functions */
int _strlen(char *);

/* shell memory management */
void *_realloc(void *, int, int);

#endif /*_SHELL_H*/
