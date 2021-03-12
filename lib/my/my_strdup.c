/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
char *my_strdup(char *str)
{
    int i = 0;
    char *tmp = malloc(sizeof(char) * my_strlen(str) + 1);

    while (str[i] != '\0') {
        tmp[i] = str[i];
        i++;
    }
    tmp[i] = '\0';
    return tmp;
}