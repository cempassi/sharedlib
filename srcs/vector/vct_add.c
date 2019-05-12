#include "vector.h"

uint8_t             vct_add(t_vector *vector, char c)
{
    uint64_t len;

    len = vct_len(vector);
    if (len + 1 >= vector->size)
        vct_scale(vector);
        
    vector->buffer[len] = c;
    vector->buffer[len + 1] = '\0';
    return (0);
}