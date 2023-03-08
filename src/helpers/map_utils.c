/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** map_utils
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

int get_map_width(char **map)
{
    int width = 0;

    for (int i = 0; map[0][i] != '\0'; i++)
        width++;
    return (width);
}

int get_map_height(char **map)
{
    int height = 0;

    for (int i = 0; map[i] != NULL; i++)
        height++;
    return (height);
}

void print_map(map_t *map)
{
    int x = 0;
    int y = 0;

    clear();
    refresh();
    if (map->map_width > COLS || map->map_height > LINES) {
        mvprintw(LINES / 2, COLS / 2 - 5, "Window too small");
        return;
    }

    for (int i = 0; map->map[i] != NULL; i++) {
        for (int j = 0; map->map[i][j] != '\0'; j++) {
            mvprintw(y, x, "%c", map->map[i][j]);
            x++;
        }
        x = 0;
        y++;
    }
}

char **my_str_to_map(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char** map;
    map = malloc(sizeof(char *) * (my_strlen(str) + 1));
    while (str[i] != '\0') {
        map[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (str[i] != '\0') {
            map[j][k] = str[i];
            i++;
            k++;
        }
        map[j][k] = '\0';
        k = 0;
        j++;
        if (str[i] != '\0')
            i++;
    }
    map[j] = NULL;
    return (map);
}

map_t *init_map(char **map)
{
    map_t *map_struct = malloc(sizeof(map_t));

    map_struct->map_origin = my_array_dup(map);
    map_struct->map = map;
    map_struct->nb_box = get_item_occur(map, 'X');
    map_struct->nb_storage = get_item_occur(map, 'O');
    map_struct->nb_box_on_storage = 0;
    map_struct->player_pos = find_player(map);
    map_struct->map_width = get_map_width(map);
    map_struct->map_height = get_map_height(map);
    return (map_struct);
}
