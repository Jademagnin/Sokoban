/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** errors
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

int my_str_isprintable(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '#' && str[i] != 'X' &&
            str[i] != 'O' && str[i] != 'P') {
            return (0);
        }
    }
    return (1);
}

int check_map(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        if (my_str_isprintable(map[i]) == 0) {
            my_putstr("Error: invalid map\n");
            return (84);
        }
    }
    return (0);
}

int check_box(char **map)
{
    int nb_box = get_item_occur(map, 'X');
    int nb_storage = get_item_occur(map, 'O');

    if (nb_box != nb_storage) {
        my_putstr("Error: number of boxes and storage don't match\n");
        return (84);
    }
    return (0);
}

int check_player(char **map)
{
    int nb_player = get_item_occur(map, 'P');

    if (nb_player != 1) {
        my_putstr("Error: number of player is not 1\n");
        return (84);
    }
    return (0);
}

int check_errors(char **map)
{
    if (check_map(map) == 84) return (84);
    if (check_box(map) == 84) return (84);
    if (check_player(map) == 84) return (84);
    return (0);
}
