#include <stdio.h>

int main(void) {
    float x;
    float y;

    printf("Enter a number for 'x': ");
    scanf("%f", &x);

    printf("Enter a number for 'y': ");
    scanf("%f", &y);

    float z = (x / y);

    printf("Quotient: %.2f\n", z);

    return 0;
}

