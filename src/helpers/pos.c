/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** pos
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

position_t find_player(char **map)
{
    position_t pos = {0, 0};
    for (int i = 0; map[i] != NULL; i++) {
        if (my_strchar(map[i], 'P') != NULL) {
            pos.x = my_strchar(map[i], 'P') - map[i];
            pos.y = i;
            return (pos);
        }
    }
    return (pos);
}

int get_item_occur(char **map, char item)
{
    int nb = 0;

    for (int i = 0; map[i] != NULL; i++) {
        nb += my_get_char_occur(map[i], item);
    }
    return (nb);
}
