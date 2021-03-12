/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
char *my_strndup(char *src, int start, int end)
{
    int i_src = start;
    int i_tmp = 0;

    char *tmp = malloc(sizeof(char) * (end - start) + 1);
    while (i_src < end) {
        tmp[i_tmp] = src[i_src];
        i_src++;
        i_tmp++;
    }
    return tmp;
}
