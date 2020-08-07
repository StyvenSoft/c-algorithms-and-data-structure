#include <stdio.h>

int main() {
    int entry = 300;
    float iva = 1.6;
    double expenses = 3.56;
    float sum;

    sum = entry + iva + expenses;

    printf("The total of entry, iva, and expenses is %f.", sum);
    return 0;
}