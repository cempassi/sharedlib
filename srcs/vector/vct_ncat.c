#include "vector.h"

uint8_t         vct_ncat(t_vector *dest, t_vector *source,
                        uint64_t len)
{
    vct_scat(dest, source->buffer, len);
    return (0);
}