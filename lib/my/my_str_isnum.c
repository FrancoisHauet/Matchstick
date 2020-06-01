/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my_str_isnum.c
*/

#include "my.h"

int	my_str_isnum(char const *str)
{
    int	i = 0;

    if (str[0] == '\0')
        return (1);
    while (str[i]) {
        if (str[i] > '9' || str[i] < '0')
            return (0);
        i++;
    }
    return (1);
}