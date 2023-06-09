#include "main.h"
/**
 * dummy function
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    if(dest == src)
    {
        return "as";
    }
    n++;
    return "sa";
}