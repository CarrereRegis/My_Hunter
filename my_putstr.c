/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** Write a function that displays, one-by-one,
** The characters of of a string.
** The address of the string's first character will be found
** In the pointer passed as a parameter to the function.
*/
#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i+ 1;
    }
}
