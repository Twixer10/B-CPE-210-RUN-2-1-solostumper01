/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** lib
*/

#include "../../include/my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;
    while (str[i]) {
        if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
            return (0);
        i = i + 1;
    }
    return (1);
}

int my_char_isalpha(char c)
{
    if (!((c > 64 && c < 91) || (c > 96 && c < 123)))
        return (TRUE);
    else
        return (FALSE);
}
