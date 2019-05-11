#include "vector.h"

uint8_t             vct_cut(t_vector *vector)
{
    uint64_t    len;
    char        *sub;

    len = vct_len(vector);
    sub = vct_sub(vector, 1, len - 1);
    ft_strdel(&vector->buffer);
    vector->buffer = sub;
    vector->size = vct_len(vector) + 1;
    return (0);
}