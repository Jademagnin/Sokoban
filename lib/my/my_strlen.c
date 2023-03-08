/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** ok
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
