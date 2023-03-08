/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** my_str_to_arr
*/

#include <stdlib.h>

char **my_str_to_arr(char *my_map, int width, int height)
{
    char **map = malloc(sizeof(char *) * (height + 1));

    if (!map) return NULL;

    int j = 0;
    for (int i = 0; my_map[i] != '\0' ; j++) {
        map[j] = malloc(sizeof(char) * (width + 1));
        for (int k = 0; my_map[i] != '\n' && my_map[i] != '\0'; ++i, ++k) {
            map[j][k] = my_map[i];
        }
        i += (my_map[i] == '\n') ? 1 : 0;
    }
    map[j] = NULL;
    return (map);
}
