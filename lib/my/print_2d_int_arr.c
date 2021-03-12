/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
void printer_2d_arr_int(long **arr, long x, long y)
{
    if (arr[y][x] == -1) {
        my_putchar('$');
        my_put_nbr(arr[y][x]);
        my_putchar('\n');
    }
    else {
        my_put_nbr(arr[y][x]);
        my_putchar('|');
    }
}

void print_2d_int_arr(long **arr, int nb_rows, int nb_cols)
{
    for (long y = 0 ; y < nb_rows ; y++) {
        for (long x = 0 ; x <= nb_cols ; x++) {
            printer_2d_arr_int(arr, x, y);
        }
    }
}
