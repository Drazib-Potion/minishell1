/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** check if n is P or N
*/

#include "my.h"
int my_isneg(int n)
{
    if (n < 0) {
        my_putchar(78);
    }
    else {
        my_putchar(80);
    }
    return 0;
}
