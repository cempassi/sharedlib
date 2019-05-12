#include "libft.h"
#include "vct_unit.h"

static void setUp(t_vector **vect)
{
    *vect = vct_new(0);
}
static void tearDown(t_vector **vect)
{
    vct_del(vect);
}
static int test_basic7(void)
{
    t_vector *dest;
    setUp(&dest);

    vct_scpy(dest, "abcdef0123456789", 16);
    if (!ft_strequ(vct_get_string(dest), "abcdef0123456789"))
        return (-1);
    if (!ft_strequ(vct_sub(dest, 6, 10), "0123456789"))
        return (-1);

    tearDown(&dest);
    return 1;
}
static int test_basic6(void)
{
    t_vector *dest;
    setUp(&dest);

    vct_scpy(dest, "abcdef0123456789", 16);
    if (!ft_strequ(vct_get_string(dest), "abcdef0123456789"))
        return (-1);
    if (!ft_strequ(vct_sub(dest, 6, 10), "0123456789"))
        return (-1);

    tearDown(&dest);
    return 1;
}
static int test_basic5(void)
{
    t_vector *dest;
    setUp(&dest);

    vct_scpy(dest, "abcdef0123456789", 16);
    if (!ft_strequ(vct_get_string(dest), "abcdef0123456789"))
        return (-1);
    if (!ft_strequ(vct_sub(dest, 6, 10), "0123456789"))
        return (-1);

    tearDown(&dest);
    return 1;
}
static int test_basic4(void)
{
    t_vector *dest;
    setUp(&dest);

    vct_scpy(dest, "0123456789", 10);
    vct_insert_char(dest, 'X', 10);

    vct_insert_char(dest, 'X', 0);
    vct_insert_char(dest, 'X', 7);

ft_printf(dest->buffer);
    if (!ft_strequ(dest->buffer, "XbcdefX012345678X"))
        return (-1);

    tearDown(&dest);
    return 0;
}

static int test_inschar(void)
{
    t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "0123456789", 10);

   // vct_insert_char(dest, 'X', 10);
//    ft_printf("res:%s\n", dest->buffer);
//    if (!ft_strequ(vct_get_string(dest), "0123456789X"))
//        return (-1);
       

   /* vct_insert_char(dest, 'X', 11);
    if (!ft_strequ(vct_get_string(dest), "0123456789XX"))
       return (-1);

    vct_insert_char(dest, 'X', 5);
    if (!ft_strequ(vct_get_string(dest), "01234X56789XX"))
        return (-1);

    vct_insert_char(dest, 'X', 0);
    if (!ft_strequ(vct_get_string(dest), "X01234X56789XX"))
        return (-1);
*/
    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_delchar(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    tearDown(&dest);
    tearDown(&src);
    return (-1);
}

static int test_pop(void)
{
    t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

  //  vct_scpy(dest, "abcdef0123456789", 16);
   // ft_printf("res:|%s|\n", (dest)->buffer);
    int8_t pop = 21;
    pop = vct_pop(dest);
    if (pop == 4)
        ft_printf("pop:|%ld|\n", pop);
    else if (pop == 21)
        ft_printf("pip\n");
    else
        ft_printf("pap\n");

    //if (!ft_strequ(vct_get_string(dest), "abcdef012345678"))
      //  return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_push(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
   // vct_push(dest, 'X');
    
    if (!ft_strequ(vct_get_string(dest), "abcdef0123456789"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_cut(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    vct_cut(dest);

    if (!ft_strequ(vct_get_string(dest), "bcdef0123456789"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_add(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    vct_add(dest, 'X');

    if (!ft_strequ(vct_get_string(dest), "abcdef0123456789X")
        || vct_len(dest) != 17)
        return (-1);


    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_string(void)
{
    t_vector *dest;
    setUp(&dest);

    vct_scpy(dest, "abcdef0123456789", 16);
    if (!ft_strequ(vct_get_string(dest), "abcdef0123456789"))
        return (-1);

    tearDown(&dest);
    return 0;
}

static int test_sub(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    if (!ft_strequ(vct_sub(dest, 0, 16), "abcdef0123456789"))
        return (-1);
    if (!ft_strequ(vct_sub(dest, 4, 12), "ef0123456789"))
        return (-1);
    if (!ft_strequ(vct_sub(dest, 6, 4), "0123"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_x(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    tearDown(&dest);
    tearDown(&src);
    return (-1);
}

static int test_ncat(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(src, "Hate it or love it", ft_strlen("Hate it or love it"));
    vct_ncat(dest, src, vct_len(src));
    if (!ft_strequ(dest->buffer, "Hate it or love it"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}
static int test_sncpy(void)
{
    t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(src, "Hate it or love it", ft_strlen("Hate it or love it"));
    vct_ncpy(dest, src, 10);
    if (!ft_strequ(dest->buffer, "Hate it or")
        || !ft_strequ(src->buffer, "Hate it or love it")
        || vct_len(dest) != 10)
        return (-1);
    
    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_init(void)
{
    t_vector *vct;
    setUp(&vct);

    if (vct_len(vct) != 0)
        return (-1);
    if (vct_size(vct) != 64)
        return (-1);
    vct_set_scale(vct, 64);
    vct_scale(vct);
    if (vct_size(vct) != 128)
        return (-1);
    vct_resize(vct, 42);
    if (vct_size(vct) != 42)
        return (-1);

    tearDown(&vct);
    return (0);
}

t_result test_vectors(int print)
{
    t_stack test;

    ft_stckinit(&test);

    load_test(&test, "Vector init", test_init);
    load_test(&test, "Vector copy", test_sncpy);
    load_test(&test, "Vector ncat", test_ncat);
    load_test(&test, "Vector sub", test_sub);
    load_test(&test, "Vector string", test_string);
    load_test(&test, "Vector add", test_add);
    load_test(&test, "Vector pop", test_pop);
    load_test(&test, "Vector push", test_push);
    load_test(&test, "Vector cut", test_cut);

    load_test(&test, "Vector ins char", test_inschar);
    load_test(&test, "Vector del char", test_delchar);
    load_test(&test, "Vector ins/del string", test_basic5);
    load_test(&test, "Vector replace char/string", test_basic6);
    load_test(&test, "Vector add/push pop/cut", test_basic7);

    return (run_test(&test, "Vector tests", print));
}

void    vector_test(int print)
{
    t_list *result;

    result = NULL;

    print_test_header();
    set_test(&result, test_vectors(print));
    print_test_separator(print);

    return ;
}

int main(int ac, char **av)
{

    int print = 0;
    if (ac != 1)
        print = 1;
    
    test_vectors(print);
    return 0;
}