/*
** EPITECH PROJECT, 2022
** my_array_dup
** File description:
** my_array_dup
*/

#include <stdlib.h>
#include "my.h"

char **my_array_dup(char **array)
{
    char **new_array = malloc(sizeof(char *) * (my_array_len(array) + 1));
    int i = 0;

    if (new_array == NULL)
        return (NULL);
    while (array[i] != NULL) {
        new_array[i] = my_strdup(array[i]);
        i++;
    }
    new_array[i] = NULL;
    return (new_array);
}
