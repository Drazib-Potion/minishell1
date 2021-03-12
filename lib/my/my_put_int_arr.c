/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_put_int_arr(int *arr, int size)
{
    int i = 0;

    while ( i < size * 2) {
        if (i % 2 == 0) {
            my_put_nbr(arr[i]);
            my_putchar(' ');
        }
        i++;
    }
    my_putchar('\n');
    return 0;
}
