/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** ia_turn.c
*/

#include "my.h"

void ia_turn(struct s_match *ma)
{
    int match = (rand() % ma->col);
    int line = (rand() % ma->line + 1);

    if (match == 0)
        match += 1;
    while (count_match_line(ma->tab[line - 1]) == 0)
        line = (rand() % ma->line + 1);
    match = match % count_match_line(ma->tab[line - 1]) + 1;
    if (count_match_line(ma->tab[line - 1]) == 2 &&
        win_condition(ma->tab) == 2)
        match = 1;
    my_printf("\nAI's turn...\n");
    my_printf("AI removed %d match(es) from line %d\n", match, line);
    modif_tab(ma, line, match);
}