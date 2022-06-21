/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** malloc_part
*/

#include "../../include/my.h"

char *malloc_part(char *str, int start, int end)
{
    char *new = malloc(sizeof(char) * (end - start + 1));
    int i = 0;

    for (; str[start] != '\n' && start != end; start++, i++)
        new[i] = str[start];
    new[i] = '\0';
    return new;
}
