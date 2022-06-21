/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** get_room
*/

#include "../../include/my.h"

char *get_r(char *map)
{
    int i = 0;

    for (; map[i] != '-'; i++);
    return malloc_part(map, 0, i);
}

char *get_r2(char *map)
{
    int i = 0;
    int j = 0;

    for (; map[i] != '\n' && map[i] != '-'; i++);
    for (; map[j] != '\n'; j++);
    return malloc_part(map, i + 1, j);
}
