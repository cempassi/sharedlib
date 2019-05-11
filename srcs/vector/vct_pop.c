#include "vector.h"

uint8_t             vct_pop(t_vector *vector)
{
    vector->buffer[vct_len(vector)] = '\0';
    return (0);
}