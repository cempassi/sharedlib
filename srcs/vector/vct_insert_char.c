#include "vector.h"
#include "libft.h"

int8_t       vct_insert_char(t_vector *vector, char c, uint64_t index)
{
    uint64_t    v_len;
    //protection
    ft_printf("idx:%d\n", vct_len(vector));
    if (vector == NULL)
        return (-1);
    v_len = vct_len(vector);
    if (index > v_len)
       return (1);
    if (v_len + 1 >= vector->size)
        vct_scale(vector);
    //insertion
    //if (index  v_len)
      //  vct_add(vector, c);

    //vecto();
    return (0);
}