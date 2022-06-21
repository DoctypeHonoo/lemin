/*
** EPITECH PROJECT, 2022
** *
** File description:
** parsing_ants
*/

#include "../../include/my.h"

int check_type(char ch)
{
    if (ch < '0' || ch > '9') {
        if (ch == '#')
            return 4;
        if (ch == ' ')
            return 1;
        if (ch == '-')
            return 2;
        else
            return 3;
    }
    return 0;
}

int check_if_ants_2(settings_t *settings, t_analyse *analyse)
{
    int i = 0;

    for (; settings->map[i] != '\n'; i++) {
        if (check_type(settings->map[i]) == 1)
            analyse->spaces++;
        if (check_type(settings->map[i]) == 2)
            analyse->strip++;
        if (check_type(settings->map[i]) == 3)
            analyse->others++;
        if (check_type(settings->map[i]) == 4) {
            i++;
            break;
        }
    }
    return i;
}

int check_if_ants(settings_t *settings)
{
    int i = 0;
    t_analyse analyse;
    analyse.spaces = 0;
    analyse.strip = 0;
    analyse.others = 0;

    i = check_if_ants_2(settings, &analyse);
    if (analyse.others > 0 || i == 0)
        return 84;
    if ((analyse.spaces == 2 && analyse.strip == 0) || (analyse.spaces == 0 &&
    analyse.strip == 1) || settings->map[0] == '#')
        return 0;
    if (analyse.spaces == 0 && analyse.strip == 0 && settings->antsbool == 0)
        return 1;
    else
        return 84;
}
