#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -
 * 
 * 
 * 
 * 
*/
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d);
    }
}
