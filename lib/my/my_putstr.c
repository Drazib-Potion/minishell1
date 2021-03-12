/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_putstr(char const *str)
{
    int i = 0;

    while ( str[i] != '\0' ) {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
