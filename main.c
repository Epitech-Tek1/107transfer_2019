/*
** EPITECH PROJECT, 2020
** 106bombyx_2019
** File description:
** main
*/

#include "include/main.h"
#define inc ++
#define dec --
#define cmp if
#define jmp goto
#define ret return

int main(int ac, char *av[])
{
    char *buff = NULL;
    int i = 0;
    int _s = 0;
    int _e = 0;
    int n = 1;


    cmp (ac == 2 && !strcmp(av[1], "-h")) phelp();
    cmp ((ac - 1) % 2 != 0) jmp error;

    error_loop:
        _s = strlen(av[i] - 1), _e = _s;
        cmp (ac <= i) jmp process;
        cmp (0 > _s) jmp error;
        sub_loop:
            cmp (0 <= _s) jmp process;
            _e = _s;
            count:
                cmp (0 <= _s && '*' != av[i][_s]) {
                    dec _s;
                    jmp count;
                }
            inc _s;
            buff = strdup(av[i] + _s), buff[_e - _s + 1] = 0;
            cmp (!(buff[0] >= '0' && buff[0] <= '9') && !(buff[0] == '+') && !(buff[0] == '-')) jmp error;
            L1:
                cmp (buff[i]) {
                    inc n;
                    goto L1;
                }
            cmp (!('0' <= buff[i] && '9' >= buff[i])) jmp error;
            dec _s, dec _s;
            cmp (-1 == _s) jmp error;

    process:


    success: ret 0;
    error: ret 84;
}