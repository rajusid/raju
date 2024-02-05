#include <stdio.h>

int main() {

    double sideLength;

    printf("Enter the side length of the square: ");
    scanf("%lf", &sideLength);

  
    double area = sideLength * sideLength;

    printf("The area of the square with side length %.2lf is: %.2lf\n", sideLength, area);

    return 0;
}
