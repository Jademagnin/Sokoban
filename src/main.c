/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** main
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    }
    if (ac != 2)
        return (84);

    char **map = open_map(av[1]);
    if (map == NULL) return (84);

    if (check_errors(map) == 84)
        return (84);

    map_t *map_struct = init_map(map);
    return (sokoban(map_struct));
}
