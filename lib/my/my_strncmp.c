/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_strncmp(char const *s1, char const *s2, int n)
{
    int nb1 = 0;
    int nb2 = 0;

    for (int i = 0 ; i < n ; i++) {
        nb1 = s1[i] + nb1;
    }
    for (int i = 0 ; i < n ; i++) {
        nb2 = s2[i] + nb2;
    }
    if (nb1 == nb2) {
        return 0;
    }
    if (nb1 < nb2) {
        return -1;
    }
    if (nb1 > nb2) {
        return 1;
    }
}
