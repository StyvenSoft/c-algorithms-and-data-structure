#include <stdio.h>
#include <stdlib.h>

int main ()
{
    sayHi("Mike", 1);
    sayHi("Tom", 2);
    sayHi("Oscar", 3);
    return 0;
}

void sayHi(char users[], int pos) {
    printf("Hello %s, your position is %d\n", users, pos);
};