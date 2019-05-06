#include "ft_malloc.h"

void	*ft_calloc(size_t size)
{
	void	*ptr;

	ptr = ft_malloc(size);
	ft_bzero(ptr, size);
	return (ptr);
}
