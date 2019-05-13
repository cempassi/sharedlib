#include "vector.h"

t_vector    *vct_dups(char *str)
{
    t_vector    *new;
    uint64_t    len;

    if (str == NULL)
        return (NULL);
    len = ft_strlen(str);
    if ((new = vct_new(len)) == NULL)
        return (NULL);
    vct_scpy(new, str, len);
    return (new);
}