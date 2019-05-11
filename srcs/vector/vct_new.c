#include "vector.h"

t_vector	*vct_new(uint64_t size)
{
	t_vector	*new;
	char		*buffer;

	if (!(new = malloc(sizeof(t_vector))))
		return (NULL);
	if (size > 0)
	{
		if (!(buffer = ft_strnew(size)))
		{
			free(new);
			return (NULL);
		}
		new->size = size;
	}
	else
	{
		if (!(buffer = ft_strnew(DEFAULT_VECTOR_SIZE)))
		{
			free(new);
			return (NULL);
		}
		new->size = DEFAULT_VECTOR_SIZE;
	}
	new->buffer = buffer;
	new->scale = DEFAULT_VECTOR_SCALE;
	return (new);
}