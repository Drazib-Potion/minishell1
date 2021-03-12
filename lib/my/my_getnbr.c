/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int my_getnbr(char const *str)
{
    long num = 0;
    int neg = 1;
    int i = 0;

    while (str[i] < '0' || str[i] > '9') {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        if (str[i-1] == '-') {
            neg = -1;
        }
        num += (str[i]-48);
        num *= 10;
        i++;
    }
    num = num / 10;
    if (num < -2147483648 || num > 2147483647) {
        return 0;
    }
    return (num*neg);
}
