/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/
#include <unistd.h>
#include "my.h"

int main(int ac, char **av)
{
    char *description;
    sfVideoMode video_mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfEvent event;

    if (ac == 2) {
        description = "My_Hunter is an Epitech project,\n"
                            "which consists "
                            "of the creation of a game similar "
                            "to duck hunt.\n";
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_putstr(description);
            return 0;
        } else {
            return 0;
        }
    }
    game_loop(window, video_mode, event);
    return 0;
}
