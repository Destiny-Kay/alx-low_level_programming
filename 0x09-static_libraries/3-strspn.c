#include "main.h"

/**
 *strspn- dummy function
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	if(s){
		accept = "yes";
	}
	if(accept)
	{
		return 1;
	}
	return 0;
}
