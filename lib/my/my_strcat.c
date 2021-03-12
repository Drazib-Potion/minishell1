/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/


char *my_strcat(char *dest, char *src)
{
    char *tmp = malloc(sizeof(char) * my_strlen(dest) + my_strlen(src) + 1);
    int i = 0;
    int u = 0;

    while (dest[i] != '\0') {
        tmp[i] = dest[i];
        i++;
    }
    while (src[u] != '\0') {
        tmp[i] = src[u];
        u++;
        i++;
    }
    tmp[i] = '\0';
    my_strcpy(dest, tmp);
    return tmp;
}
