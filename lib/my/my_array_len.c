/*
** EPITECH PROJECT, 2022
** my_array_len
** File description:
** my_array_len
*/

#include <stdlib.h>

int my_array_len(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return (i);
}
