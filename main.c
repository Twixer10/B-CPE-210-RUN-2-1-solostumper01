/*
** EPITECH PROJECT, 2021
** SORT WORDS
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/swords.h"

int main(int ac, char **av)
{
    if (ac == 1) {
        my_putstr("\n");
        return (0);
    } else {
        sort_words(av);
    }
}
