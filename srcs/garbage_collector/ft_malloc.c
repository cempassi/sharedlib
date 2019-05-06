#include "ft_malloc.h"

void	*ft_malloc(size_t size)
{
	return (ft_realloc(NULL, size));
}
