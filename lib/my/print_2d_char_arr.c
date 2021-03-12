/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
void print_2d_char_arr(char **arr)
{
    for (int y = 0 ; arr[y] != NULL ; y++) {
        my_putstr(arr[y]);
        my_putchar('\n');
    }
}
