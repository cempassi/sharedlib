#include "vector.h"

uint8_t       vct_insert_char(t_vector *vector, char c, uint64_t index)
{
    //protection
    if (index > vct_len(vector))
        return (1);
    if (vct_len(vector) + 2 < vector->size)
        vct_scale(vector);
    //insertion
    (void)c;
   return (0);
}