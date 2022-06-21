/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** build_graph
*/

#include "../../include/my.h"

void build_graph_4(settings_t *settings)
{
    if (is_in(settings->map, '-') && settings->map[0] != '#')
        node_push_back3(&settings->tunnels, parsing_tunnels(settings->map));
}

void build_graph_3(stock_t **stocked, settings_t *settings)
{
    if (is_in(settings->map, ' ') && settings->map[0] != '#') {
        settings->room = malloc(sizeof(room_t));
        settings->room->name = set_str(settings->map, ' ');
        settings->room->links = NULL;
        node_push_back(stocked, settings->room);
        node_push_back2(&settings->rooms, parsing_rooms(settings->map),
        settings->start, settings->end);
        if (settings->start == 1) {
            settings->room->start = 1;
            settings->start = 2;
        }
        if (settings->end == 1) {
            settings->room->end = 1;
            settings->end = 2;
        }
    }
}

int build_graph_2(settings_t *settings)
{
    if (check_if_ants(settings) == 84)
        return 84;
    if (check_if_ants(settings) == 1) {
        settings->ants = my_strdup(settings->map);
        settings->antsbool = 1;
    }
    if (my_strcmp(settings->map, "##start\n") == 0 && settings->start == 0)
        settings->start = 1;
    else if (my_strcmp(settings->map, "##start\n") == 0 &&
    settings->start == 2)
        return 84;
    if (my_strcmp(settings->map, "##end\n") == 0 && settings->end == 0)
        settings->end = 1;
    else if (my_strcmp(settings->map, "##end\n") == 0 && settings->end == 2)
        return 84;
    return 0;
}

int build_graph(stock_t **stocked)
{
    settings_t settings = {.map = NULL, .length = 0, .room = NULL,
    .rooms = NULL, .tunnels = NULL, .start = 0, .end = 0, .antsbool = 0,
    .ants = NULL};

    while (getline(&settings.map, &settings.length, stdin) != -1) {
        if (build_graph_2(&settings) == 84)
            return 84;
        build_graph_3(stocked, &settings);
        build_graph_4(&settings);
    }
    if (settings.start == 0 || settings.end == 0 || settings.antsbool == 0)
        return 84;
    print_parsing(settings.rooms, settings.tunnels, settings.ants);
    return 0;
}
