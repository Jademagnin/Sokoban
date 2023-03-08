/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** move_player
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

int handle_box_movements(map_t *map, position_t pos, position_t new_pos)
{
    position_t box_pos = {new_pos.x + pos.x, new_pos.y + pos.y};
    char elem_at_box_pos = map->map[box_pos.y][box_pos.x];

    if (elem_at_box_pos == 'X' || elem_at_box_pos == '#')
        return (1);
    map->map[box_pos.y][box_pos.x] = 'X';

    if (map->map_origin[box_pos.y][box_pos.x] == 'O') map->nb_box_on_storage++;

    return (0);
}

void move_player(map_t *map, position_t pos)
{
    position_t new_p_pos = {map->player_pos.x + pos.x,
                                map->player_pos.y + pos.y};

    if (map->map[new_p_pos.y][new_p_pos.x] == '#') return;

    if (map->map[new_p_pos.y][new_p_pos.x] == 'X') {
        if (handle_box_movements(map, pos, new_p_pos) == 1)
            return;
    }

    if (map->map_origin[map->player_pos.y][map->player_pos.x] == 'O')
        map->map[map->player_pos.y][map->player_pos.x] = 'O';
    else
        map->map[map->player_pos.y][map->player_pos.x] = ' ';

    map->map[new_p_pos.y][new_p_pos.x] = 'P';
    map->player_pos = new_p_pos;
}
