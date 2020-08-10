#include <stdio.h>
#include <conio.h>

int main() {
    int age;
    float weight;
    char * gender;

    age = 23;
    weight = 1.75;
    gender = "Male";

    printf("%d %f %s", age, weight, gender);

    getch();
    return 0;
}