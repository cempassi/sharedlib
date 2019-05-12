#include "vector.h"

int8_t             vct_push(t_vector *vector, char c)
{
    if (vct_len(vector) + 1 >= vector->size)
        vct_scale(vector);
    shift_right(vector, 0);
    vector->buffer[0] = c;
    return (0);
}