#include <stdio.h>

int main(void) {
    int pets_total;
    int cats, dogs, parrots, others;

    cats = 3;
    dogs = 4;
    parrots = 2;
    others = 5;

    pets_total = cats + dogs + parrots + others;

    printf("We have %d pets in total", pets_total);
    return 0;
}