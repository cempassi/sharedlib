#include "libft.h"
#include "vct_unit.h"

static int test_basic3(void)
{
    
}

static int test_basic2(void)
{
    
}

static int test_basic(void)
{
    t_vector *vct = vct_new(0);
    vct_reset(vct);

    if (vct_len(vct) != 0)
        return (-1);
    if (vct_size(vct) != 64)
        return (-1);
    return (0);
}

t_result test_vectors(int print)
{
    t_stack test;

    ft_stckinit(&test);

    load_test(&test, "Vector tests 1", test_basic);
    load_test(&test, "Vector tests 2", test_basic2);
    load_test(&test, "Vector tests 3", test_basic3);

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
    
}