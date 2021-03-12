/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
char *my_revstr(char *str) {
    int i = 0;
    int y = my_strlen(str) - 1;
    char temp;

    while (i < y) {
        temp = str[i];
        str[i] = str[y];
        str[y] = temp;
        i++;
        y--;
    }
    return str;
}
