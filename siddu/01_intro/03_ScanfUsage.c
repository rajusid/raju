/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: scanfusage.c
 * Brief: using scanf get Name,Rollnumber,CGPA from user input and print it
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 28.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    char name[50];
    int rollNumber;
    float cgpa;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    printf("Name: %s\n", name);
    printf("Roll number: %d\n", rollNumber);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}
// Program End
