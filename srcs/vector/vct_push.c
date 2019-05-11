#include "vector.h"

uint8_t             vct_push(t_vector *vector, char c)
{
    uint64_t    len;
    char        *copy;

    len = vct_len(vector);
    if (len + 2 > vector->size)
        vct_scale(vector);
    
    ft_strcpy(vector->buffer, copy);
    vector->buffer[0] = c;
    vector->buffer[1] = '\0';
    ft_strncat(vector->buffer, copy, ft_strlen(copy));
    return (0);
}