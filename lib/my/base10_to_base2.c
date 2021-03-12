/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
#include <stdlib.h>
char *base10_to_base2(int nb)
{
    int nb_clone = nb;
    int i = 0;

    char *nb_b2 = malloc(sizeof(char) * nbr_of_b2_digits(nb) + 1);
    nb_clone = nb;
    while (nb_clone != 0) {
        nb_b2[i] = (nb_clone % 2) + 48;
        nb_clone /= 2;
        i++;
    }
    nb_b2[i] = '\0';
    my_revstr(nb_b2);
    return (nb_b2);
}
