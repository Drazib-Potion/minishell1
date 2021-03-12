/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swaps the  content of two integrs
*/

#include "my.h"
void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
