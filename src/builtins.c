/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
void my_exit(char **cmd)
{
    if (cmd[0][0] == 'e' && cmd[0][1] == 'x' && cmd[0][2] == 'i' &&
        cmd[0][3] == 't') {
        pid_t pid = getpid();
        free_tab(cmd);
        kill(pid, SIGKILL);
    }
}

int my_cd(char **cmd) {
    if (cmd[0][0] == 'c' && cmd[0][1] == 'd') {
        chdir(cmd[1]);
        return 1;
    }
    return 0;
}

int my_env(char **cmd, char **env)
{
    if (cmd[0][0] == 'e' && cmd[0][0] == 'n' && cmd[0][0] == 'v') {
        print_2d_char_arr(env);
        return 1;
    }
    return 0;
}

int builtin_exec(char **cmd, char **env)
{
    int builtin_checker = 0;

    my_exit(cmd);
    builtin_checker = my_cd(cmd);
    builtin_checker = my_env(cmd, env);
    return builtin_checker;
}