#include "vector.h"

uint8_t       vct_replace_string(t_vector *vector,
                    uint64_t start_index, uint64_t end_index, char *str)
{
    uint64_t    del_diff;
    uint64_t    str_len;

    //protection
    if (start_index > vct_len(vector) || start_index >=  end_index)
        return (1);

    str_len = ft_strlen(str);
    del_diff = end_index - start_index;
    if (str_len > del_diff)
        vct_resize(vector, vct_len(vector) + (str_len - del_diff) + 1);



    return (0);
}