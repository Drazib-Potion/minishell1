/*
** EPITECH PROJECT, 2020
** int to str
** File description:
** butt
*/

#include "my.h"
int nbr_of_digits(int nb)
{
    int nb_cpy = nb;
    int c = 0;

    while (nb_cpy != 0) {
        nb_cpy = nb_cpy / 10;
        c++;
    }
    return c;
}
