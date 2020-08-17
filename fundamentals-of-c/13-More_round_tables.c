#include <stdio.h>
// Let’s look at specifying PI as an alias for its value
#define PI   3.14159f

int main(void) {
    float radius = 0.0f;  
    float diameter = 0.0f;  
    float circumference = 0.0f;  
    float area = 0.0f;

    printf("Input the diameter of a table:");
    scanf("%f", &diameter);
    radius = diameter/2.0f;
    circumference = 2.0f * PI * radius;
    area = PI * radius * radius;

    printf("\nThe circunference is %.2f", circumference);
    printf("\nThe area is %.2f", area);
    
    return 0;


}