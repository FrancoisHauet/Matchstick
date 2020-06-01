/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** game.c
*/

#include "my.h"

int	game(struct s_match *ma)
{
    while (win_condition(ma->tab) != 0) {
        pyramide(ma->tab, ma->line, ma->star);
        my_printf("\nYour turn :\n");
        turn(ma);
        if (ma->done == 1)
            return (0);
        else if (win_condition(ma->tab) == 0) {
            pyramide(ma->tab, ma->line, ma->star);
            my_printf("You lost, too bad...\n");
            return (2);
        }
        pyramide(ma->tab, ma->line, ma->star);
        ia_turn(ma);
        if (ma->done == 1)
            return (0);
    }
    pyramide(ma->tab, ma->line, ma->star);
    my_printf("I lost... snif... but I'll get you next time!!\n");
    return (1);
}
