#include "vector.h"

int8_t         vct_ncpy(t_vector *dest, t_vector *source,
                        uint64_t len)
{
    vct_scpy(dest, source->buffer, len);
    return (0);
}