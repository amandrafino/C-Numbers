#include <stdio.h>

void doTheMath(void);

int main(void) {
    doTheMath();
    return 0;
}

void doTheMath() {
    // Declare and initialize the variables
    float dividend;
    float divisor;
    float result;

    // Prompt the user for input
    printf("Enter a dividend (x): ");
    scanf("%f", &dividend);

    printf("Enter a divisor (y): ");
    scanf("%f", &divisor);

    // Perform the division and store the result
    if (divisor != 0) {
        result = dividend / divisor;

        // Display the result with three decimal places
        printf("Result (x / y): %.3f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    
}
