#ifndef VECTOR_H
# define VECTOR_H

#include <unistd.h>
#include <stdlib.h>
#include <libft.h>

# define DEFAULT_VECTOR_SIZE 64
# define DEFAULT_VECTOR_SCALE 8
 
typedef struct      s_vector
{
    char            *buffer;
    uint64_t        size;
    uint16_t        scale;
}                   t_vector;

t_vector            *vct_new(uint64_t size);
uint8_t             vct_reset(t_vector *vector);
uint64_t            vct_len(t_vector *vector);
uint64_t            vct_size(t_vector *vector);
void                vct_del(t_vector **vector);
void                vct_set_scale(t_vector *vector, uint16_t scale);
uint8_t             vct_resize(t_vector *vector, uint64_t new_size);
uint8_t             vct_scale(t_vector *vector);

uint8_t             vct_ncpy(t_vector *dest, t_vector *src,
                            uint64_t len);
uint8_t             vct_ncat(t_vector *dest, t_vector *src,
                            uint64_t len);
uint8_t             vct_scpy(t_vector *dest, char *src,
                            uint64_t len);
uint8_t             vct_scat(t_vector *dest, char *src,
                            uint64_t len);

char                *vct_get_string(t_vector *vector);
char                *vct_sub(t_vector *vector, uint64_t start, uint64_t length);

int8_t             vct_insert_char(t_vector *vector, char c, uint64_t index);
uint8_t             vct_del_char(t_vector *vector, uint64_t index);

uint8_t             vct_insert_string(t_vector *vector, char *str, uint64_t index);
uint8_t             vct_del_string(t_vector *vector, uint64_t start, uint64_t len);

uint8_t             vct_replace_char(t_vector *vector, char c, uint64_t index);
uint8_t             vct_replace_string(t_vector *vector, uint64_t start, uint64_t end, char *str);

uint8_t             vct_add(t_vector *vector, char c);
uint8_t             vct_push(t_vector *vector, char c);
int8_t             vct_pop(t_vector *vector);
uint8_t             vct_cut(t_vector *vector);
#endif