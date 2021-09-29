/*
** EPITECH PROJECT, 2021
** SORT WORDS 2
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/swords.h"

void depression(char **tab)
{
    int i = 0;
    
    while (tab[i]) {
        if (tab[i+1])
            my_printf("%s ", tab[i]);
        else
            my_putstr(tab[i]);
        i++;
    }
}

void sort(char **tab)
{
    char **cpy = tab;
    int i = 0;
    int k = 1;
    while (cpy[i]) {
        cpy[i] = my_strlowcase(cpy[i]);
        i++;
    }
    i = 1;
    while (cpy[k]) {
        if (cpy[k][i]!= '\0' && cpy[k-1][i-1] <= cpy[k][i]) {
            i++;
        }
        k++;
    }
    depression(tab);
}

void sort_words(char **av)
{
    char **tab;
    int i = 0;
    int k = 0;
    char *new = malloc(sizeof(char) * my_strlen(av[1]));
    
    while (av[1][i]) {
        if (av[1][i] == '\t')
            new[k++] = ' ';
        else
            new[k++] = av[1][i];
        i++;
    }
    tab = my_str_to_word_array(new);
    sort(tab);
    free(new);
}
