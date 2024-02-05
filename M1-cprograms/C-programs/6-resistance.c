#include <stdio.h>

int main() {
    
    double voltage, current, resistance;

    
    printf("Enter the voltage (in volts): ");
    scanf("%lf", &voltage);

    
    printf("Enter the current (in amperes): ");
    scanf("%lf", &current);

    
    resistance = voltage / current;

    printf("The resistance is: %.2lf ohms\n", resistance);

    return 0;
}

