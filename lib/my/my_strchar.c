/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** my_strchar
*/

#include <stdlib.h>

char* my_strchar(char* str, char c)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}
