/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

int sokoban(map_t *map)
{
    initscr();
    noecho();
    cbreak();
    curs_set(FALSE);
    clear();
    print_map(map);
    while (1) {
        threat_key_events(map, getch());
        refresh();
        print_map(map);
        check_win(map);
        check_lose(map);
    }
    endwin();
    return (0);
}
