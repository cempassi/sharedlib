#include "vector.h"

int8_t       vct_replace_string(t_vector *vector,
                    uint64_t start_index, uint64_t end_index, char *str)
{
    uint64_t    del_diff;
    uint64_t    str_len;
    uint64_t    tmp;

    if (start_index > vct_len(vector) || start_index >= end_index)
        return (-1);
    str_len = ft_strlen(str);
    del_diff = end_index - start_index;
    if (str_len > del_diff) // str longer than place
    {
        vct_resize(vector, vct_len(vector) + (str_len - del_diff) + 2);
        tmp = str_len - del_diff;
        shift_nright(vector, end_index, tmp);
        while (*str != '\0')
            vector->buffer[start_index++] = *str++;
    }
    else if (str_len < del_diff)
    {
        tmp = del_diff - str_len;
        shift_nleft(vector, start_index, tmp);
        while (*str != '\0')
            vector->buffer[start_index++] = *str++;
    }
    else
    {
        while (*str != '\0')
            vector->buffer[start_index++] = *str++;
    }
    return (0);
}