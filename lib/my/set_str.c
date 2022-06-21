/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** set_str
*/

#include "../../include/my.h"

char *set_str(char *map, char ch)
{
    int i = 0;
    char *name;
    int j = 0;

    for (; map[i] != ch; i++);
    name = malloc(sizeof(char) * (i + 1));
    for (; j != i; j++)
        name[j] = map[j];
    name[j] = 0;
    return name;
}
