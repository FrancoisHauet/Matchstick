/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "my.h"

int	check_arg(char **av)
{
    int a = 1;

    if (my_getnb(av[1]) < 1 || my_getnb(av[1]) > 100)
        return (84);
    a = 2;
    if (my_getnb(av[2]) < 1)
        return (84);
    return (0);
}

int	main(int ac, char **av)
{
    struct s_match ma;
    int	winner = 0;

    if (ac == 3) {
        if (check_arg(av) == 84)
            return (84);
        init_struct(&ma, av);
        winner = game(&ma);
        my_free_tab(ma.tab);
    }
    else
        return (84);
    return (winner);
}
