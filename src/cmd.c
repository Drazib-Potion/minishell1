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
char **cmd_parsing(char *input, char *limit) {
    char *tmp = malloc(sizeof(char) * 99);
    char **cmd = malloc(sizeof(char *) * count_arg(input, limit) + 1);
    int i = 0;

    tmp = strtok(input, limit);
    while (tmp != NULL) {
        cmd[i] = malloc(sizeof(char) * my_strlen(tmp) + 1);
        cmd[i]  = my_strdup(tmp);
        tmp = strtok(NULL, limit);
        cmd[i + 1] = NULL;
        i++;
    }
    cmd[i - 1][my_strlen(cmd[i - 1]) - 1] = '\0';
    free(tmp);
    return cmd;
}

void cmd_exec(char **cmd, char **av, char **env)
{
    pid_t child_pid = fork();
    int status = 0;

    if (child_pid > 0) {
        waitpid(child_pid, &status, 0);
        kill(child_pid, SIGTERM);
    }
    else if (execve(cmd[0], cmd, env) == -1)
        perror("command");
    free_tab(cmd);
}

void cmd_absolute_path(char **cmd, char **env)
{
    char *path = malloc(sizeof(char) * my_strlen(get_path(env)) + 1);
    char **path_parsed;
    char *bin_path;
    int size;

    path = get_path(env);
    path_parsed = cmd_parsing(path, ":");
    for (int i = 0 ; path_parsed[i] != NULL ; i++) {
        size = my_strlen(cmd[0]) + my_strlen(path_parsed[i]) + 2;
        bin_path = malloc(sizeof(char) *size);
        my_strcat(bin_path, path_parsed[i]);
        my_strcat(bin_path, "/");
        my_strcat(bin_path, cmd[0]);
        if (access(bin_path, F_OK) == 0)
            break;
    }
    free(path);
    cmd[0] = bin_path;
}

void cmd_handler(char *buffer, char **av, char **env)
{
    char **cmd;

    cmd = cmd_parsing(buffer, " ");
    if (builtin_exec(cmd, env) == 0) {
        cmd_absolute_path(cmd, env);
        cmd_exec(cmd, av, env);
    }
}