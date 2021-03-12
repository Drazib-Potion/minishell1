/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_put_nbr(int nb)
{
    int n = 1;
    if (nb < 0) {
        n = -1;
        my_putchar('-');
        nb = nb * n;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    if (nb <= 9 && nb >= 0){
        my_putchar(nb + 48);
    }
}
