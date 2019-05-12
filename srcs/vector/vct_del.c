#include "vector.h"

void        vct_del(t_vector **vector)
{
    if (vector == NULL || *vector == NULL)
        return ;
    ft_strdel(&(*vector)->buffer);
    free(*vector);
    *vector = NULL;
}