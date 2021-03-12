/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#ifndef MY_H_

#define MY_H_

#include <stdlib.h>
#include <stdio.h>

int my_printf(char * const format, ...);

ssize_t write(int fd, const void *buf, size_t nbytes);

char *base10_to_base2(int nb);

char *base10_to_base8(int nb);

int nbr_of_b2_digits(int nb);

void my_putchar(char);

void my_sort_int_array(int *, int);

int my_compute_power_rec(int, int);

int my_compute_square_root(int);

int my_find_prime_sup(int);

int my_getnbr(char const *);

int my_isneg(int);

int my_is_prime(int);

int my_put_nbr(int);

int my_putstr(char const *);

char *my_revstr(char *);

int my_showmem(char const *, int);

int my_showstr(char const *);

char *my_strcapitalize(char *);

char *my_strcat(char *, char const *);

int my_strcmp(char const *, char const *);

char *my_strcpy(char *, char const *);

int my_str_isalpha(char const *);

int my_str_islower(char const *);

int my_str_isnum(char const *);

int my_str_isprintable(char const *);

int my_str_isupper(char const *);

int my_strlen(char const *);

char *my_strlowcase(char *);

char *my_strncat(char *, char const *, int);

int my_strncmp(char const *, char const *, int);

char *my_strncpy(char *, char const *, int);

void my_strstr(char *, char const *);

char *my_strupcase(char *);

void my_swap(int *, int *);

#endif
