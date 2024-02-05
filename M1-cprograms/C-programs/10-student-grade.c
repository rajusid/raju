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

    
    int average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;

    
    if (average > 80) {
        printf("Grade: A\n");
    } else if (average > 60) {
        printf("Grade: B\n");
    } else if (average > 40) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}

