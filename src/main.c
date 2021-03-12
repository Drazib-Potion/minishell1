/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av, char **env)
{
    char *buffer = NULL;
    size_t buff_size = 1024;

    buffer = malloc(sizeof(char) * buff_size);
    write(1, "$> ", 3);
    while (getline(&buffer, &buff_size, stdin) != -1) {
        cmd_handler(buffer, av, env);
        write(1, "$> ", 3);
    }
    free(buffer);
}
