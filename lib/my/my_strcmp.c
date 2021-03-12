/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_strcmp(char const *s1, char const *s2)
{
    int nb1 = 0;
    int nb2 = 0;
    int i = 0;

    while (s1[i] != '\0') {
        nb1 = s1[i] + nb1;
        i++;
    }
    i = 0;
    while (s2[i] != '\0') {
        nb2 = s2[i] + nb2;
        i++;
    }
    if (nb1 == nb2)
        return 0;
    if (nb1 < nb2)
        return -1;
    if (nb1 > nb2)
        return 1;
}
