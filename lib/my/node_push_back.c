/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** node_push_back
*/

#include <stdlib.h>
#include "../../include/my.h"

void node_push_back2(parsing_t **node, char *str, int start, int end)
{
    parsing_t *next_node = malloc(sizeof(parsing_t));
    parsing_t *prev_node = NULL;

    next_node->line = my_strdup(str);
    next_node->start = start;
    next_node->end = end;
    next_node->next = NULL;
    if (*node == NULL) {
        *node = next_node;
        return;
    }
    prev_node = *node;
    while (prev_node->next)
        prev_node = prev_node->next;
    prev_node->next = next_node;
}

void node_push_back3(parsing_t **node, char *str)
{
    parsing_t *next_node = malloc(sizeof(parsing_t));
    parsing_t *prev_node = NULL;

    next_node->line = my_strdup(str);
    next_node->next = NULL;
    if (*node == NULL) {
        *node = next_node;
        return;
    }
    prev_node = *node;
    while (prev_node->next)
        prev_node = prev_node->next;
    prev_node->next = next_node;
}

void node_push_back(stock_t **node, room_t *room)
{
    stock_t *next_node = malloc(sizeof(stock_t));
    stock_t *prev_node = NULL;

    next_node->room = room;
    next_node->next = NULL;
    if (*node == NULL) {
        *node = next_node;
        return;
    }
    prev_node = *node;
    while (prev_node->next)
        prev_node = prev_node->next;
    prev_node->next = next_node;
}
