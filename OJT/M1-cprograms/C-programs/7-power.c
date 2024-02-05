#include <stdio.h>

int main() {
    
    float current, resistance, power;

    
    printf("Enter the current (in Amperes): ");
    scanf("%f", &current);

    printf("Enter the resistance (in Ohms): ");
    scanf("%f", &resistance);

    
    power = current * current * resistance;

    
    printf("The power is: %.2f Watts\n", power);

    return 0;
}

