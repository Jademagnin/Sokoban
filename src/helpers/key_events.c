/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** key_events
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

void threat_key_events(map_t *map, int key)
{
    switch (key) {
        case UP:
            move_player(map, (position_t){0, -1}); break;
        case DOWN:
            move_player(map, (position_t){0, 1}); break;
        case LEFT:
            move_player(map, (position_t){-1, 0}); break;
        case RIGHT:
            move_player(map, (position_t){1, 0}); break;
    }
}
