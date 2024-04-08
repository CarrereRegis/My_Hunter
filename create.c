/*
** EPITECH PROJECT, 2023
** create_ducky.c
** File description:
** create ducky
*/
#include <unistd.h>
#include "my.h"

int create(menu_t *menu, game_t *game, sfRenderWindow *window)
{
    create_ducky((&game->ducky), window);
    create_button((&menu->button), window);
    create_menu(menu, window);
    create_game(game, window);
}

int create_ducky(ducky_t *ducky, sfRenderWindow *window)
{
    ducky->texture_ducky = sfTexture_createFromFile("./assests/ducky_3.png",
                                                    NULL);
    ducky->ducky_3 = sfSprite_create();
    ducky->clock_ducky = sfClock_create();
    ducky->rect.top = 32;
    ducky->rect.left = 0;
    ducky->rect.width = 36;
    ducky->rect.height = 36;
    sfSprite_setTexture(ducky->ducky_3, ducky->texture_ducky, sfTrue);
    sfSprite_setScale(ducky->ducky_3, (sfVector2f){3, 3});
    sfSprite_setTextureRect(ducky->ducky_3, ducky->rect);
    sfSprite_setPosition(ducky->ducky_3, (sfVector2f){0, 850});
    sfRenderWindow_drawSprite(window, ducky->ducky_3, NULL);
}

int create_button(button_t *button, sfRenderWindow *window)
{
    button->texture04 = sfTexture_createFromFile("./assests/Cbutton.png",
                                                NULL);
    button->cbutton = sfSprite_create();
    button->texture02 = sfTexture_createFromFile("./assests/Playbutton.png",
                                                NULL);
    button->playbutton = sfSprite_create();
    sfSprite_setTexture(button->cbutton, button->texture04, sfTrue);
    sfSprite_setScale(button->cbutton, (sfVector2f){0.3, 0.3});
    sfSprite_setPosition(button->cbutton, (sfVector2f){900, 450});
    sfRenderWindow_drawSprite(window, button->cbutton, NULL);
    sfSprite_setTexture(button->playbutton, button->texture02, sfTrue);
    sfSprite_setScale(button->playbutton, (sfVector2f){5, 5});
    sfSprite_setPosition(button->playbutton, (sfVector2f){923, 465});
    sfRenderWindow_drawSprite(window, button->playbutton, NULL);
}

int create_menu(menu_t *menu, sfRenderWindow *window)
{
    menu->texture = sfTexture_createFromFile("./assests/MainMenu.png", NULL);
    menu->sprite = sfSprite_create();
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
    sfSprite_setScale(menu->sprite, (sfVector2f){5.19, 3.07});
    sfRenderWindow_drawSprite(window, menu->sprite, NULL);
}

int create_game(game_t *game, sfRenderWindow *window)
{
    game->texture03 = sfTexture_createFromFile("assests/Background.png",
                                                NULL);
    game->sprite03 = sfSprite_create();
    sfSprite_setTexture(game->sprite03, game->texture03, sfTrue);
    sfSprite_setScale(game->sprite03, (sfVector2f){2.07, 1.28});
    sfRenderWindow_drawSprite(window, game->sprite03, NULL);
}
