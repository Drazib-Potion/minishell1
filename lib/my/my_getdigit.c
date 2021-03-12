/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_getdigit(char const digit)
{
    long num = 0;

    if (digit >= '0' && digit <= '9') {
        num += (digit - 48);
    }
    return (num);
}
