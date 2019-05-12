#include "vector.h"

int8_t       vct_del_char(t_vector *vector, uint64_t index)
{
    if (index > vct_len(vector))
        return (-1);
    shift_left(vector, index);
    return (0);
}