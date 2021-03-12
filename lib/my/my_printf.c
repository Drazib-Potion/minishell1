/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
#include <stdarg.h>
void S_flag(char * const format, va_list argptr)
{
    char *str = va_arg(argptr, char *);
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_putstr(base10_to_base8(str[i]));
        }
        else {
            my_putchar(str[i]);
        }
    }
}
void format_check(char * const format, int i, va_list argptr)
{
    if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i')) {
        my_put_nbr(va_arg(argptr, int));
    }
    if (format[i] == '%' && format[i + 1] == 's') {
        char *str = va_arg(argptr, char *);
        my_putstr(str);
    }
    if (format[i] == '%' && format[i + 1] == 'c') {
        char c = va_arg(argptr, int);
        my_putchar(c);
    }
    if (format[i] == '%' && format[i + 1] == 'b') {
        int nb = va_arg(argptr, int);
        my_putstr(base10_to_base2(nb));
    }
    if (format[i] == '%' && format[i + 1] == 'S') {
        S_flag(format, argptr);
    }
}

int my_printf(char * const format, ...)
{
    va_list argptr;

    va_start(argptr, format);
    for (int i = 0 ; format[i] != '\0' ; i++) {
        if (format[i] != '%' && format[i - 1] != '%') {
            my_putchar(format[i]);
        }
        else {
            format_check(format, i, argptr);
        }
    }
    va_end(argptr);
    return 0;
}
