/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_compute_square_root(int nb)
{
    int i = 1;

    if (nb == 1) {
        return 1;
    }
    if (nb == 2 || nb <= 0) {
        return 0;
    }
    if (nb > 0 && (nb % 2) == 0) {
        while (i * i != nb) {
            i++;
        }
        if (i * i == nb) {
            return i;
        }
    }
    else {
        return 0;
    }
}
