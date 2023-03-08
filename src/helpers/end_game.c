/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** end_game
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

int box_lose(char** map, position_t pos)
{
    if (map[pos.y][pos.x] == 'X') {
        if (map[pos.y + 1][pos.x] == '#' && map[pos.y][pos.x + 1] == '#')
            return (1);
        if (map[pos.y + 1][pos.x] == '#' && map[pos.y][pos.x - 1] == '#')
            return (1);
        if (map[pos.y - 1][pos.x] == '#' && map[pos.y][pos.x + 1] == '#')
            return (1);
        if (map[pos.y - 1][pos.x] == '#' && map[pos.y][pos.x - 1] == '#')
            return (1);
    }
    return (0);
}

void check_lose(map_t *map_struct)
{
    int nb_box_stuck = 0;

    for (int i = 0; map_struct->map[i] != NULL; i++) {
        for (int j = 0; map_struct->map[i][j] != '\0'; j++) {
            position_t pos = {j, i};
            nb_box_stuck += box_lose(map_struct->map, pos);
        }
    }
    if (nb_box_stuck >= map_struct->nb_box) {
        endwin();
        exit(1);
    }
}

void check_win(map_t *map_struct)
{
    if (map_struct->nb_box_on_storage >= map_struct->nb_storage) {
        endwin();
        exit(0);
    }
}
