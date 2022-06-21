/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** main
*/

#include "include/my.h"

int main(int argc, char **argv)
{
    (void) argv;
    if (argc != 1)
        return 84;
    stock_t *stocked = NULL;
    return build_graph(&stocked);
}
