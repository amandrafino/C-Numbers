#include <stdio.h>

void doTheMath(void);

int main() {
    doTheMath();
    return 0;
}

void doTheMath() {
    // Declare and initialize three variables
    float dividend;
    float divisor;
    float result;

    // Prompt user for input
    printf("Enter a dividend 'x': ");
    scanf("%f", &dividend);

    printf("Enter a divisor 'y': ");
    scanf("%f", &divisor);

    // Perform division and store the result
    if(divisor != 0) {
        result = dividend / divisor;

        printf("Result (x / y): %.3f\n", result);
    } else {
        printf("Error: division by zero is not allowed\n");
    }
}
