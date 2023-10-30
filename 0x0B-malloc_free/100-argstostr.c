#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: ...
 */

char *argstostr(int ac, char **av);

char *concat_args(char *res, const char *arg, int *len) {
    while (*arg != '\0') {
        *res = *arg;
        res++;
        arg++;
        (*len)++;
    }
    return res;
}

char *argstostr(int ac, char **av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    size_t len = 0;
    int i, j;
    char *res, *cur;

    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++) {
            len++;
        }
        len++;
    }

    res = (char *)malloc((len + 1) * sizeof(char));
    if (res == NULL) {
        return NULL;
    }

    cur = res;

    for (i = 0; i < ac; i++) {
        cur = concat_args(cur, av[i], &len);
        *cur = ' ';
        cur++;
    }

    if (len > 0) {
        cur--;
    }

    *cur = '\0';

    return res;
}

