/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
int count_words(char *str)
{
    int in_word = 0;
    int c = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] <= 127 && str[i] >= 33) {
            in_word = 1;
        }
        else if (str[i] == 32 && in_word == 1 && str[i + 1] != '\0') {
            c++;
            in_word = 0;
        }
    }
    return c + 1;
}
char **malloc_tab(char *str)
{
    char **tab = malloc(sizeof(char *) * count_words(str) + 1);
    int cur_nb_word = 0;
    int y = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] <= 127 && str[i] >= 33) {
            cur_nb_word++;
           
        }
        else if (str[i] == 32) {
            tab[y] = malloc(sizeof(char) * cur_nb_word + 2);
            cur_nb_word = 0;
            y++;
        }
    }
    tab[y] = malloc(sizeof(char) * cur_nb_word + 2);
    cur_nb_word = 0;
    y++;
    return tab;
}
char **my_str_to_word_array(char *str)
{
    char **tab = malloc_tab(str);
    int y = 0;
    int x = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] <= 127 && str[i] >= 33) {
            tab[y][x] = str[i];
            x++;
        }
        else if (str[i] == 32) {
            tab[y][x] = '\0';
            y++;
            x = 0;
        }
    }
    tab[y][x] = '\0';
    y++;
    return tab;
}
