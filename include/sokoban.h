/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

    #include <ncurses.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <sys/stat.h>

    #define UP 65
    #define DOWN 66
    #define LEFT 68
    #define RIGHT 67

typedef struct position_s {
    int x;
    int y;
} position_t;

typedef struct map_s {
    char** map_origin;
    char** map;
    int nb_box;
    int nb_storage;
    int nb_box_on_storage;
    int map_width;
    int map_height;
    position_t player_pos;
} map_t;

int sokoban(map_t *map);
void check_win(map_t *map_struct);
void check_lose(map_t *map_struct);
char **my_str_to_map(char *str);
int help(void);
void print_map(map_t *map);
int check_map(char **map);
int get_file_size(char *path);
char *read_file(char *path);
position_t find_player(char **map);
char **my_str_to_map(char *str);
map_t *init_map(char **map);
char **open_map(char *path);
void move_player(map_t *map, position_t pos);
void threat_key_events(map_t *map, int key);
int box_lose(char** map, position_t pos);
int my_str_isprintable(char *str);
int check_errors(char **map);
int get_item_occur(char **map, char item);

#endif /* !SOKOBAN_H_ */
