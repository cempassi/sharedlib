#include "vector.h"

uint8_t         vct_ncpy(t_vector *dest, t_vector *source,
                        uint64_t len)
{
    //protection
    if (dest->size < len)
        vct_resize(dest, len + 1);
    
    //copy
    ft_strncpy(dest->buffer, source->buffer, len);
    return (0);
}