#include "vector.h"

uint8_t       vct_insert_string(t_vector *vector,
                    char *str, uint64_t index)
{
    //protection
    if (index > vct_len(vector))
        return (1);
    if ((vct_len(vector) + ft_strlen(str) + 1) > vector->size)
        vct_resize(vector, (vct_len(vector) + ft_strlen(str) + 1));
    //insertion
    return (0);
}