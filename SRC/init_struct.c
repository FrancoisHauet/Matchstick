/*
** EPITECH PROJECT, 2018
** init
** File description:
** ...
*/

#include "my.h"

void display_stars(int stars)
{
    for (stars; stars > 0; stars--)
        my_putchar('*');
    my_putchar('\n');
}

char **pyramide(char **tab, int line, int star)
{
    int i = 0;
    int j = 0;
    int x = 0;

    display_stars(star);
    while (i < line) {
        j = 0;
        my_putchar('*');
        for (j; j < star - 2; j++)
            my_putchar(tab[x][j]);
        x++;
        my_putstr("*\n");
        i++;
    }
    display_stars(star);
    return (tab);
}

char **put_match(char **tab, int line)
{
    int	y = 0;
    int	x = 0;

    while (y <= line) {
        x = 0;
        for (x; x <= y; x++) {
            tab[y][line - x] = '|';
            tab[y][line + x] = '|';
        }
        y++;
    }
    return (tab);
}

char **make_board(int line, int star)
{
    char **tab = NULL;
    int	x = 0;
    int	y = 0;

    tab = malloc(sizeof(char *) * (line + 1));
    while (y < line) {
        x = 0;
        tab[y] = malloc(sizeof(char) * star + 1);
        for (x; x < star; x++)
            tab[y][x] = ' ';
        tab[y][star] = '\0';
        y++;
    }
    tab[line] = NULL;
    tab = put_match(tab, line - 1);
    return (tab);
}

void init_struct(struct s_match *ma, char **av)
{
    ma->line = my_getnb(av[1]);
    ma->col = my_getnb(av[2]);
    ma->star = ma->line * 2 + 1;
    ma->tab = make_board(ma->line, ma->star - 2);
    ma->done = 0;
}
