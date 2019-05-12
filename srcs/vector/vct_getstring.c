#include "vector.h"

char       *vct_get_string(t_vector *vector)
{
   return (vector->buffer);
}