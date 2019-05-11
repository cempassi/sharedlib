#include "vector.h"

char       *vct_sub(t_vector *vector, uint64_t start, uint64_t len)
{
   return (ft_strsub(vector->buffer, start, len));
}