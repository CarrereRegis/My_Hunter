/*
** EPITECH PROJECT, 2023
** event_manager.c
** File description:
** event manager
*/
#include <unistd.h>
#include "../include/my.h"

void if_clic(sfRenderWindow *window, sfEvent event, int *stat)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x >= 677 && mouse.x <= 764 && mouse.y >= 340 && mouse.y <= 412) {
        if (event.type == sfEvtMouseButtonPressed) {
            *stat = 1;
        }
    }
}

int event_menu(sfRenderWindow *window, sfEvent event, int *stat)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
            }
        }
        if_clic(window, event, stat);
}

int event_game(sfRenderWindow *window, sfEvent event, int *stat)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
            }
    }
}
