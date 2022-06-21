/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** parsing_print
*/

#include "../../include/my.h"

char *parsing_tunnels(char *map)
{
    int i = 0;
    char *res = NULL;

    for (; map[i] != '\0'; i++)
        if (map[i] == ' ' || map[i] == '#' || map[i] == '\n')
            break;
    res = malloc(sizeof(char) * (i + 1));
    for (int j = 0; j != i; j++)
        res[j] = map[j];
    res[i] = 0;
    return res;
}

char *parsing_rooms(char *map)
{
    int i = 0;
    int count = 0;
    char *res = NULL;

    for (; map[i]; i++) {
        if (map[i] == ' ' || map[i] == '#' || map[i] == '\n')
            count++;
        if (count == 3)
            break;
    }
    res = malloc(sizeof(char) * (i + 1));
    for (int j = 0; j != i; j++)
        res[j] = map[j];
    res[i] = '\0';
    return res;
}
