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

static int test_replace_string(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    //ft_printf("dst:%s\n", dest->buffer);

    vct_scpy(dest, "0123456789abcdef", 16);
    vct_replace_string(dest, 10, 11, "Bosch");
    if (!ft_strequ(vct_get_string(dest), "0123456789Boschbcdef"))
        return (-1);

    vct_replace_string(dest, 10, 15, "xx");
    if (!ft_strequ(vct_get_string(dest), "0123456789xxbcdef"))
        return (-1);
       
    vct_replace_string(dest, 0, 1, "xx");
    if (!ft_strequ(vct_get_string(dest), "xx123456789xxbcdef"))
        return (-1);

    vct_replace_string(dest, 0, 2, "a");
    if (!ft_strequ(vct_get_string(dest), "a123456789xxbcdef"))
        return (-1);

    vct_replace_string(dest, 0, 2, "aa");
    if (!ft_strequ(vct_get_string(dest), "aa23456789xxbcdef"))
        return (-1);

    vct_replace_string(dest, 0, vct_len(dest), "Bosch is the best");
    if (!ft_strequ(vct_get_string(dest), "Bosch is the best"))
        return (-1);

    vct_replace_string(dest, 0, vct_len(dest), "xoxo");
    if (!ft_strequ(vct_get_string(dest), "xoxo"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_replace_char(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "0123456789abcdef", 16);
    vct_replace_char(dest, 'X', 16);
    vct_replace_char(dest, 'X', 0);
    vct_replace_char(dest, 'X', 2);
    vct_replace_char(dest, 'X', 14);
    if (!ft_strequ(vct_get_string(dest), "X1X3456789abcdXfX"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_delstr(void)
{
    t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    vct_del_string(dest, 14, 2);
    if (!ft_strequ(vct_get_string(dest), "abcdef01234567"))
        return (-1);
    vct_del_string(dest, 6, 8);
    if (!ft_strequ(vct_get_string(dest), "abcdef"))
        return (-1);
    vct_del_string(dest, 0, 3);
    if (!ft_strequ(vct_get_string(dest), "def"))
        return (-1);
    vct_del_string(dest, 2, 1);
    if (!ft_strequ(vct_get_string(dest), "de"))
        return (-1);
    vct_del_string(dest, 0, 1);
    if (!ft_strequ(vct_get_string(dest), "e"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}
static int test_insstr(void)
{
    t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    vct_insert_string(dest, "Bosch", 6);
    if (!ft_strequ(vct_get_string(dest), "abcdefBosch0123456789"))
        return (-1);
    vct_insert_string(dest, "Bosch", 21);
    if (!ft_strequ(vct_get_string(dest), "abcdefBosch0123456789Bosch"))
        return (-1);
    vct_insert_string(dest, "XXX", 0);
    if (!ft_strequ(vct_get_string(dest), "XXXabcdefBosch0123456789Bosch"))
        return (-1);
    vct_insert_string(dest, "plop", 14);
    if (!ft_strequ(vct_get_string(dest), "XXXabcdefBoschplop0123456789Bosch"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_inschar(void)
{
    t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "0123456789", 10);

    vct_insert_char(dest, 'X', 10);

    if (!ft_strequ(vct_get_string(dest), "0123456789X"))
        return (-1);
       
    vct_insert_char(dest, 'X', 11);
    if (!ft_strequ(vct_get_string(dest), "0123456789XX"))
       return (-1);

    vct_insert_char(dest, 'X', 4);
    if (!ft_strequ(vct_get_string(dest), "0123X456789XX"))
        return (-1);

    vct_insert_char(dest, 'X', 0);
    if (!ft_strequ(vct_get_string(dest), "X0123X456789XX"))
        return (-1);

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

    vct_scpy(dest, "0123456789", 10);
    vct_del_char(dest, 9);
    vct_del_char(dest, 0);
    if (!ft_strequ(vct_get_string(dest), "12345678"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_pop(void)
{
    t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    vct_pop(dest);
    if (!ft_strequ(vct_get_string(dest), "abcdef012345678"))
        return (-1);

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
    vct_push(dest, 'X');
    if (!ft_strequ(vct_get_string(dest), "Xabcdef0123456789"))
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

static int test_shift_l(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    shift_left(dest, 0);
    if (!ft_strequ(dest->buffer, "bcdef0123456789"))
        return (-1);
    vct_scpy(src, "abcdef0123456789", 16);
    shift_left(src, 4);
    if (!ft_strequ(src->buffer, "abcdf0123456789"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
}

static int test_shift_r(void)
{
     t_vector *dest;
    t_vector *src;
    setUp(&dest);
    setUp(&src);

    vct_scpy(dest, "abcdef0123456789", 16);
    shift_right(dest, 0);
    if (!ft_strequ(dest->buffer, "aabcdef0123456789"))
        return (-1);
    vct_scpy(src, "abcdef0123456789", 16);
    shift_right(src, 4);
    if (!ft_strequ(src->buffer, "abcdeef0123456789"))
        return (-1);

    tearDown(&dest);
    tearDown(&src);
    return (0);
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
    load_test(&test, "Vector shift right", test_shift_r);
    load_test(&test, "Vector shift left", test_shift_l);

    load_test(&test, "Vector ins char", test_inschar);
    load_test(&test, "Vector del char", test_delchar);

    load_test(&test, "Vector ins str", test_insstr);
    load_test(&test, "Vector del str", test_delstr);

    load_test(&test, "Vector replace char", test_replace_char);
    load_test(&test, "Vector replace string", test_replace_string);

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