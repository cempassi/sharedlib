#include "vector.h"

int8_t        vct_reset(t_vector *vector)
{
    char *new;

	if (!(new = ft_strnew(DEFAULT_VECTOR_SIZE)))
		return (-1);
	ft_strdel(&(vector->buffer));
	vector->buffer = new;
	vector->size = DEFAULT_VECTOR_SIZE;
    vector->scale = DEFAULT_VECTOR_SCALE;
	return (0);
}