#include "vector.h"

t_vector    *vct_dup(t_vector *vect)
{
    return (vct_dups(vct_get_string(vect)));
}