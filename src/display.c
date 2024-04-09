/*
** EPITECH PROJECT, 2023
** display.c
** File description:
** display all Sprites
*/
#include <unistd.h>
#include "../include/my.h"

void display_menu(menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, menu->sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->button.cbutton, NULL);
    sfRenderWindow_drawSprite(window, menu->button.playbutton, NULL);
}

void display_game(game_t *game, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, game->sprite03, NULL);
    sfRenderWindow_drawSprite(window, game->ducky.ducky_3, NULL);
    ducky_animation(game);
}
