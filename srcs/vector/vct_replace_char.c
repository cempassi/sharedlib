#include "vector.h"

uint8_t       vct_replace_char(t_vector *vector, char c, uint64_t index)
{
    //protection
    if (index > vct_len(vector))
        return (1);
    vector->buffer[index] = c;
    return (0);
}