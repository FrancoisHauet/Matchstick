/*
** EPITECH PROJECT, 2018
** util
** File description:
** ...
*/

#include "my.h"

void my_free_tab(char **tab)
{
    int y = 0;

    while (tab[y] != NULL) {
        free(tab[y]);
        y++;
    }
    free(tab);
}

int win_condition(char **tab)
{
    int y = 0;
    int x = 0;
    int nb = 0;

    while (tab[y]) {
        x = 0;
        for (x; tab[y][x]; x++)
            tab[y][x] == '|' ? nb++ : 0;
        y++;
    }
    return (nb);
}

int count_match_line(char *str)
{
    int i = 0;
    int res = 0;

    for (i; str[i]; i++) {
        if (str[i] == '|')
            res++;
    }
    return (res);
}

void modif_tab(struct s_match *ma, int line, int nb)
{
    int right = ma->line * 2 - 1;

    line -= 1;
    for (right; nb != 0 && right >= 0; right--) {
        if (ma->tab[line][right] == '|') {
            ma->tab[line][right] = ' ';
            nb--;
        }
    }
}
