/*
** EPITECH PROJECT, 2023
** My_Hunter.c
** File description:
** My Hunter
*/
#include <unistd.h>
#include "../include/my.h"

void game_loop(sfRenderWindow *wndw, sfVideoMode mode, sfEvent event)
{
    int stat = 0;
    game_t game;
    menu_t menu;

    wndw = sfRenderWindow_create(mode, "my_hunter", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(wndw, 6000);
    create(&menu, &game, wndw);
    while (sfRenderWindow_isOpen(wndw)) {
        sfRenderWindow_clear(wndw, sfBlack);
        if (stat == 0)
            event_menu(wndw, event, &stat);
        if (stat == 1)
            event_game(wndw, event, &stat);
        if (stat == 0)
            display_menu(&menu, wndw);
        if (stat == 1) {
            display_game(&game, wndw);
        }
        sfRenderWindow_display(wndw);
    }
    sfRenderWindow_destroy(wndw);
}
