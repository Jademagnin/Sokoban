/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** file_utils
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

int get_file_size(char *path)
{
    struct stat st;

    stat(path, &st);
    return (st.st_size);
}

char *read_file(char *path)
{
    int fd = open(path, O_RDONLY);
    int size = get_file_size(path);
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (fd == -1)
        return (NULL);
    read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    return (buffer);
}

char **open_map(char *path)
{
    char *map = read_file(path);
    if (map == NULL)
        return (NULL);

    if (map[my_strlen(map) - 1] != '\n') {
        map = my_strcat(map, "\n");
        map[my_strlen(map)] = '\0';
    }

    return (my_str_to_word_array(map, '\n'));
}
