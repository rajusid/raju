#include <stdio.h>

int main() {
    
    int subject1, subject2, subject3, subject4, subject5;

    
    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);

    printf("Enter marks for Subject 4: ");
    scanf("%d", &subject4);

    printf("Enter marks for Subject 5: ");
    scanf("%d", &subject5);

    
    int sum = subject1 + subject2 + subject3 + subject4 + subject5;

    printf("Sum of marks in five subjects: %d\n", sum);

    return 0;
}

