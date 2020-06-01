/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int groot = 0;

    if ((nb == 0) || (nb < 0)) {
        return (0);
    }
    if (nb == 1) {
        return (1);
    }
    while (groot * groot != nb) {
        groot++;
        if (groot * groot > nb) {
            return (0);
        }
    }
    return (groot);
}