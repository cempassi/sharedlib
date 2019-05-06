#include "ft_malloc.h"

t_list	*ft_lstnew_no_malloc(unsigned char **data)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list->next = NULL;
	if (!*data)
		list->data = NULL;
	else
		list->data = *data;
	return (list);
}
