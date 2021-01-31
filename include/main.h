/*
** EPITECH PROJECT, 2020
** 106bombyx_2019
** File description:
** main
*/

#ifndef MAIN_H_
#define MAIN_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>

int process(int ac, char *av[]);

#define NUM(num) ((!(_s[i] >= '0' && _s[i] <= '9')) ? 0 : 1)
#define DEC(num) ((!(_s[i] >= '0' && _s[i] <= '9') &&  _s[i] != '.') ? 0 : 1)

static void  phelp(void)
{
    printf("USAGE\n");
    printf("    ./107transfer [num den]*\n\n");
    printf("DESCRIPTION\n");
    printf("    num    polynomial numerator defined by its coefficients\n");
    printf("    den    polynomial denominator defined by its coefficients\n");

    exit (0);
}

static inline bool isnbr(const char *restrict _s)
{
    for (int i = 0; i < strlen(_s); ++i) if (!NUM(_s[i])) return 0; return 1;
}

static inline bool isdec(const char *restrict _s)
{
    for (int i = 0; i < strlen(_s); ++i) if (!DEC(_s[i])) return 0; return 1;
}

#endif /* !MAIN_H_ */