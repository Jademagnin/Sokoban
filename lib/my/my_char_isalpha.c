/*
** EPITECH PROJECT, 2022
** my_char_isalphanum
** File description:
** is char alpha
*/

int my_char_isalpha(char c)
{
    if (c >= 'a' && c <= 'z') {
        return (1);
    }
    if (c >= 'A' && c <= 'Z') {
        return (1);
    }
    if (c >= '0' && c <= '9') {
        return (1);
    }
    return (0);
}
