/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_compute_power_rec(int nb, int p) {
    int nb_powered = 1;
    int i = p;

    if (p == 1) {
        return nb;
    }
    if (p == 0)
        return 1;
    if (p > 0) {
        i--;
        nb_powered = my_compute_power_rec(nb, i) * nb;
        return nb_powered;
    }
    else {
        return 0;
    }
}
