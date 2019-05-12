#include "vector.h"

int8_t       vct_del_string(t_vector *vector,
                    uint64_t start, uint64_t len)
{
    shift_nleft(vector, start, len);
    return (0);
}