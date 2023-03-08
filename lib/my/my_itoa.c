/*
** EPITECH PROJECT, 2022
** myhunter
** File description:
** my_itoa
*/

#include "my.h"
#include <stdlib.h>

int my_intlen(int nb)
{
    int i = 0;

    if (nb == 0)
        return (1);
    if (nb < 0) {
        nb = nb * -1;
        i++;
    }
    while (nb > 0) {
        nb = nb / 10;
        i++;
    }
    return (i);
}

char* my_itoa(int nb)
{
    int len = my_intlen(nb);
    char *str = malloc(sizeof(char) * (len + 1));
    int i = 0;
    if (nb == 0) {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    if (nb < 0) {
        str[0] = '-';
        nb = nb * -1;
        i++;
    }
    str[len] = '\0';
    while (nb > 0) {
        str[len - 1] = (nb % 10) + '0';
        nb = nb / 10;
        len--;
    }
    return (str);
}
