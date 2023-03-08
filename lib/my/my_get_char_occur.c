/*
** EPITECH PROJECT, 2022
** my_count_char
** File description:
** my_count_char
*/

int my_get_char_occur(char *str, char c)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            count++;
        i++;
    }
    return (count);
}
