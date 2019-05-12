#include "vector.h"

int8_t         vct_scat(t_vector *dest, char *source,
                        uint64_t len)
{
    if (dest->size < (vct_len(dest) + len))
        vct_resize(dest, (vct_len(dest) + len) + 1);
    ft_strncat(dest->buffer, source, len);
    return (0);
}