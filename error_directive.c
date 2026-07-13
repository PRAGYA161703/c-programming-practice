#include <stdio.h>

#define DEBUG
#define Safe_mode

#ifndef Safe_mode
#error Only Safe_mode platform supported!
#endif

int main() {
#ifdef DEBUG
    printf("Debugging is ON\n");
#endif

    return 0;
}