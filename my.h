/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

    #include <unistd.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <SFML/Graphics.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>

typedef struct ducky_s {
    sfTexture *texture_ducky;
    sfSprite *ducky_3;
    sfVector2f scale_ducky_3;
    sfIntRect rect;
    sfClock *clock_ducky;
    sfVector2f pos_ducky_3;
} ducky_t;

typedef struct game_s {
    sfTexture *texture03;
    sfSprite *sprite03;
    sfVector2f scale_game;
    ducky_t ducky;
} game_t;

typedef struct button_s {
    sfTexture *texture02;
    sfSprite *playbutton;
    sfVector2f scale_playbutton;
    sfVector2f pos_playbutton;
    sfTexture *texture04;
    sfSprite *cbutton;
    sfVector2f scale_cbutton;
    sfVector2f pos_cbutton;
} button_t;

typedef struct menu_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    button_t button;
} menu_t;

void if_clic(sfRenderWindow *window, sfEvent event, int *stat);
int main(int ac, char **av);
int my_putstr(char const *str);
void my_putchar(char c);
void ducky_animation(game_t *game);
int create(menu_t *menu, game_t *game, sfRenderWindow *window);
int create_ducky(ducky_t *ducky, sfRenderWindow *window);
int create_button(button_t *button, sfRenderWindow *window);
int create_menu(menu_t *menu, sfRenderWindow *window);
int create_game(game_t *game, sfRenderWindow *window);
int event_menu(sfRenderWindow *window, sfEvent event, int *stat);
int event_game(sfRenderWindow *window, sfEvent event, int *stat);
void display_menu(menu_t *menu, sfRenderWindow *window);
void display_game(game_t *game, sfRenderWindow *window);
void game_loop(sfRenderWindow *window, sfVideoMode video_mode, sfEvent event);

#endif
