#include "vector.h"

char       *vct_getcopy(t_vector *vector)
{
   return (ft_strsub(vector->buffer, 0, vct_len(vector)));
}