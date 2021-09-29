/*
** EPITECH PROJECT, 2021
** MY STR TO WORLD ARRAY
** File description:
** NO DESCRIPTION FOUND
*/

#include "../../include/my.h"
#include <stdlib.h>

int is_char(char c, int status)
{
	if (status == 1) {
            if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        	return (1);
	} else if (status == 2) {
            if (c >= 33 && c <= 126 && c != 58)
	       	return (1);
	}
	return (0);
}

int len(char *str)
{
    int	a = 0;
    int	b = 0;
    while (str[a] != '\0'){
        if (is_char(str[a], 1) == 1 && is_char(str[a + 1], 1) != 1){
            b = b + 1;
        }
        a = a + 1;
    }
    return (b);
}

int len_of_word(char *str, int i)
{
    while (str[i] != '\0') {
        if (!is_char(str[i], 1))
            return (i);
        i++;
    }
    return (i);
}


char **my_str_to_word_array(char *str)
{
    int	y = len(str);
    char **result = malloc(sizeof(char *) * y + 1);
    int	a = 0;
    int	b = 0;
    int	c = 0;
    
    while (b < y){
        c = 0;
        result[b] = malloc(sizeof(char) * len_of_word(str, a));
        while (str[a] != '\0' && is_char(str[a], 1) != 0 &&
            str[a] != '\n') {
            result[b][c] = str[a];
            c = c + 1;
            a = a + 1;
        }
        result[b][c] = '\0';
        a = a + 1;
        b = b + 1;
    }
    return (result);
}
