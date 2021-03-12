/*
** EPITECH PROJECT, 2020
** $NAME_OF_THE_PROJECT
** File description:
** No file  there , just an  epitech  header  example
*/

void char_arr_cpy(char **new_map, char **charmap, int nb_rows, int nb_cols)
{
    for (int y = 0 ; y < nb_rows ; y++) {
        for (int x = 0 ; x <= nb_cols ; x++) {
            new_map[y][x] = charmap[y][x];
        }
    }
}
