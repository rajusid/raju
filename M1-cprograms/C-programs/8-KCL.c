#include <stdio.h>

int main() {
    
    float I1, I2, I3, I4, I5, I6;

    
    printf("Enter the value of I1: ");
    scanf("%f", &I1);

    printf("Enter the value of I2: ");
    scanf("%f", &I2);

    printf("Enter the value of I3 (outgoing): ");
    scanf("%f", &I3);

    printf("Enter the value of I4: ");
    scanf("%f", &I4);

    printf("Enter the value of I5: ");
    scanf("%f", &I5);

    printf("Enter the value of I6 (outgoing): ");
    scanf("%f", &I6);

    
    float sum = I1 + I2 + I4 + I5 - I3 - I6;

    
    printf("Sum of currents: %.2f\n", sum);

    return 0;
}

