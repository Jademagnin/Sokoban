/*
** EPITECH PROJECT, 2022
** lib
** File description:
** get_min
*/

int get_min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return (a);
    if (b <= a && b <= c)
        return (b);
    if (c <= a && c <= b)
        return (c);
}
