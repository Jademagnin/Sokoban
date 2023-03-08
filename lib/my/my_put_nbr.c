/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** ok
*/

#include "my.h"

int my_put_nbr (int nb)
{
    int val = nb / 10;
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (val > 0) {
        my_put_nbr(val);
    }
    char c = nb % 10 + '0';
    my_putchar(c);
    return (0);
}
