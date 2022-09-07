#include "shell.h"

/**
* _realloc - memory allocation
*
*
*
*/



/**
* step 1: allocate a temp memory with initial bufsize
* step 2: copy from buf to temp
* step 3: free buff
* step 4: reallocate buff with newsize
* step 5: copy from temp to buf
* step 6: return the new buf
*/

void *_realloc(void *ptr, int old_size, int new_size)
{
	void *temp;
	
	if (*ptr == NULL)
	{
		return (malloc(new_size)); 
	}
	else if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		min = (new_size < old_size) ? new_size : old_size;
		temp = malloc(new_size);
		if (temp)
		{
			for (i = 0; i < min; i++)
			*((char *) temp + i) = *((char *)ptr + i);
			free(ptr);
			return (temp);
		}
		else
		{
			return (NULL);
		}
		
	}
}
