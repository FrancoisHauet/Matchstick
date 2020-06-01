/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int power)
{
    int save = nb;

    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    nb = my_compute_power_rec((nb), (power - 1)) * save;
    return (nb);
}
