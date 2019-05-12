#include "vector.h"

uint8_t         vct_scpy(t_vector *dest, char *source,
                        uint64_t len)
{
    //protection
    if (dest->size < len)
        vct_resize(dest, len + 1);
    //copy
    ft_strncpy(dest->buffer, source, len);
    return (0);
}