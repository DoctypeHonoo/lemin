/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** print_parsing
*/

#include "../../include/my.h"

void print_parsing(parsing_t *rooms, parsing_t *tunnels, char *ants)
{
    parsing_t *cpy = rooms;

    my_printf("#number_of_ants\n%s", ants);
    my_printf("#rooms\n");
    while (cpy) {
        if (cpy->start == 1)
            my_printf("##start\n");
        if (cpy->end == 1)
            my_printf("##end\n");
        my_printf("%s\n", cpy->line);
        cpy = cpy->next;
    }
    cpy = tunnels;
    my_printf("##tunnels\n");
    while (cpy) {
        my_printf("%s\n", cpy->line);
        cpy = cpy->next;
    }
    my_printf("##moves\n");
}
