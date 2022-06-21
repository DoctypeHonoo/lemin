/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** my
*/

typedef struct room_s room_t;

typedef struct links_s {
    room_t *room;
    struct links_s *next;
} links_t;

typedef struct room_s {
    char *name;
    int start;
    int end;
    links_t *links;
} room_t;

typedef struct s_analyse {
    int spaces;
    int strip;
    int others;
} t_analyse;

typedef struct s_parsing {
    char *line;
    int start;
    int end;
    struct s_parsing *next;
} parsing_t;

typedef struct stock_s {
    room_t *room;
    struct stock_s *next;
} stock_t;

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <string.h>

typedef struct s_settings {
    char *map;
    size_t length;
    room_t *room;
    parsing_t *rooms;
    parsing_t *tunnels;
    int start;
    int end;
    int antsbool;
    char *ants;
} settings_t;

int my_printf(const char *format, ...);
char *my_strcat(char *dest, char const *src);
void node_push_back(stock_t **node, room_t *room);
int my_strcmp(char const *s1, char const *s2);
void node_push_front(parsing_t **node, char *str, int start, int end);
char *my_strcpy(char *dest, char const *src);
void link_rooms(stock_t *stocked, char *room1, char *room2);
void link_rooms_2(stock_t **cpy1, stock_t **cpy2);
int my_atoi(char *str);
int build_graph(stock_t **stocked);
int check_if_ants(settings_t *settings);
char *parsing_tunnels(char *map);
char *parsing_rooms(char *map);
void print_parsing(parsing_t *rooms, parsing_t *tunnels, char *ants);
int is_in_str(char *str, char *tf);
int is_in_str_2(char *str, char *tf, int i);
char *malloc_part(char *str, int start, int end);
char *set_str(char *map, char ch);
char *get_r(char *map);
char *get_r2(char *map);
char *my_strdup(char const *src);
void node_push_back2(parsing_t **node, char *str, int start, int end);
void node_push_back3(parsing_t **node, char *str);
int is_in(const char *str, char ch);
int my_strlen(char const *str);

#endif
