#include "vector.h"

int8_t             vct_pop(t_vector *vector)
{
  vector->buffer[vct_len(vector) - 1] = '\0';
  return (0);
}