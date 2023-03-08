/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "my.h"

int get_word_index(const char *str, int word, char seperator)
{
    int count = 0;
    int on_word = 0;
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] != seperator && !on_word) {
            on_word = 1;
            count++;
        }
        if (str[i] == seperator) {
            on_word = 0;
            continue;
        }
        if (count == word) {
            return i;
        }
    }

    return (-1);
}

int count_word_letters(const char *str, int word_index, char seperator)
{
    int count = 0, on_word = 0, letter = 0;
    int length = my_strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] != seperator && on_word == 0) {
            on_word = 1;
            count++;
        }
        if (str[i] != seperator && count == word_index) {
            letter++;
            continue;
        }
        if (str[i] == seperator) {
            on_word = 0;
        }
    }

    return letter;
}

int count_words_amount(char const *str, char seperator)
{
    int count = 0, on_word = 0;
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == seperator && !on_word) {
            on_word = 1;
            count++;
        }
        if (str[i] != seperator) {
            on_word = 0;
        }
    }

    return count;
}

char **my_str_to_word_array(char const *str, char seperator)
{
    int total_words = count_words_amount(str, seperator);
    char **str_final = malloc(sizeof(char*) * (total_words + 1));

    for (int i = 0; i < total_words; i++) {
        int word_size = count_word_letters(str, i + 1, seperator);
        str_final[i] = malloc(sizeof(char) * word_size + 1);

        for (int j = 0; j < word_size; j++) {
            str_final[i][j] = str[get_word_index(str, i + 1, seperator) + j];
        }
        str_final[i][word_size] = 0;
    }

    str_final[total_words] = 0;

    return (str_final);
}
