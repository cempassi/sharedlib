#include "vector.h"

int8_t     vct_scale(t_vector *vector)
{
    char *new;

    if ((new = ft_strnew(vector->size + vector->scale)) == NULL)
        return (-1);
    vector->size += vector->scale;
    ft_strncpy(new, vector->buffer, vct_len(vector));
    ft_strdel(&vector->buffer);
    vector->buffer = new;
    return (0);
}