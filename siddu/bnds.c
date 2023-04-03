#include <stdio.h>

int main() {
    int my_array[4] = {10, 20, 30, 40};
    int index;

    printf("Enter an index to access: ");
    scanf("%d", &index);

    if (index >= 0 && index <4) 
    {
        printf("The value at index %d is %d\n", index, my_array[index]);
    } else 
    {
        printf("Error: Index %d is out of range\n", index);
    }

    return 0;
}
