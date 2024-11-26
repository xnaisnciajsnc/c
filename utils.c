#ifndef UTILS_H
#define UTILS_H

void clearScreen();
void pause();

#endif
#include <stdio.h>
#include "utils.h"

void clearScreen() {
    printf("\033[H\033[J");
}

void pause() {
    printf("按任意键继续...");
    getchar();
    getchar();
}
