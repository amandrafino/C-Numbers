#includ <stdio.h>

int main(void) {
    float x;
    float y;

    printf("Please enter a number for 'x': ");
    scanf("%f", &x);
    printf("Please enter a number for 'y': ");
    scanf("%f", &y);

    float z = (x / y);

    printf("%.3f\n", z);

    return 0;

}
