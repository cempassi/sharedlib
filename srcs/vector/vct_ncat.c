#include "vector.h"

uint8_t         vct_ncat(t_vector *dest, t_vector *source,
                        uint64_t len)
{
    //protection
    if (dest->size < (vct_len(dest) + len))
        vct_resize(dest, (vct_len(dest) + len) + 1);
        
    //cat
    ft_strncat(dest->buffer, source->buffer, len);
    return (0);
}