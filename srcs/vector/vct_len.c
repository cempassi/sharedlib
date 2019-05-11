#include "vector.h"

uint64_t            vct_len(t_vector *vector)
{
    return (ft_strlen(vector->buffer));
}