/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** link_rooms
*/

#include "../../include/my.h"

void link_rooms_2(stock_t **cpy1, stock_t **cpy2)
{

    if ((*cpy2)->room->links == NULL) {
        (*cpy2)->room->links = malloc(sizeof(links_t));
        (*cpy2)->room->links->next = NULL;
        (*cpy2)->room->links->room = (*cpy1)->room;
    } else {
        while ((*cpy2)->room->links->next)
            (*cpy2)->room->links->next = (*cpy2)->room->links->next->next;
        (*cpy2)->room->links->next = malloc(sizeof(links_t));
        (*cpy2)->room->links->next->next = NULL;
        (*cpy2)->room->links->next->room = (*cpy1)->room;
    }
}

void link_rooms(stock_t *stocked, char *room1, char *room2)
{
    stock_t *cpy1 = stocked;
    stock_t *cpy2 = stocked;

    while (cpy1->next && my_strcmp(cpy1->room->name, room1))
        cpy1 = cpy1->next;
    while (cpy2->next && my_strcmp(cpy2->room->name, room2))
        cpy2 = cpy2->next;
    if (cpy1->room->links == NULL) {
        cpy1->room->links = malloc(sizeof(links_t));
        cpy1->room->links->next = NULL;
        cpy1->room->links->room = cpy2->room;
    } else {
        while (cpy1->room->links->next)
            cpy1->room->links->next = cpy1->room->links->next->next;
        cpy1->room->links->next = malloc(sizeof(links_t));
        cpy1->room->links->next->next = NULL;
        cpy1->room->links->next->room = cpy2->room;
    }
    link_rooms_2(&cpy1, &cpy2);
}
