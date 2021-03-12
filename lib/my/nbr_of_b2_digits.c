/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int nbr_of_b2_digits(int nb)
{
    int c = 0;
    while (nb != 0) {
        nb /= 2;
        c++;
    }
    return c;
}
