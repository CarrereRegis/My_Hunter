/*
** EPITECH PROJECT, 2023
** ducky_animation.c
** File description:
** animation for ducky
*/
#include <unistd.h>
#include "../include/my.h"

void ducky_animation(game_t *game)
{
    sfVector2f offset = {15};
    sfVector2f pos_ducky_3 = {0, 850};
    int random_ducky = (rand() % 1044);

    if (sfTime_asMilliseconds(sfClock_getElapsedTime(game->ducky.clock_ducky))
        > 55) {
        game->ducky.rect = sfSprite_getTextureRect(game->ducky.ducky_3);
        game->ducky.rect.left += 32;
        if (game->ducky.rect.left >= 192)
            game->ducky.rect.left = 0;
        sfSprite_setTextureRect(game->ducky.ducky_3, game->ducky.rect);
        sfClock_restart(game->ducky.clock_ducky);
        sfSprite_move(game->ducky.ducky_3, offset);
        pos_ducky_3 = sfSprite_getPosition(game->ducky.ducky_3);
        if (pos_ducky_3.x >= 1880) {
            pos_ducky_3.x = 0;
            pos_ducky_3.y = random_ducky;
            sfSprite_setPosition(game->ducky.ducky_3, pos_ducky_3);
        }
    }
}
