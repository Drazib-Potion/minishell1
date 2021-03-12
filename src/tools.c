/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>
int count_arg(char *input, char *limit)
{
    int c = 0;
    for (int i = 0 ; input[i] != '\0' ; i++) {
        if (input[i] == limit[0] && input[i - 1] != limit[0] && i != 0)
            c++;
    }
    return c;
}

int is_path(char *str) {
    if (str[0] == 'P' && str[1] == 'A' && str[2] == 'T' && str[3] == 'H') {
        return 1;
    }
    else {
        return 0;
    }
}

char *get_path(char **env)
{
    int y = 0;

    while (env[y] != NULL) {
        if (is_path(env[y]) == 1) {
            return my_strndup(env[y], 5, my_strlen(env[y]));
        }
        y++;
    }
    return NULL;
}

void free_tab(char **tab)
{
    for (int i = 0 ; tab[i] != NULL ; i++) {
        free(tab[i]);
    }
}