/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_stu.c
 * Brief:a simple c program to store information of student using structure
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 02.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
struct student
{
     char name[20];
     int rollnum;
     float marks;
};
int main()
{
     struct student s;
    printf("Enter Information:\n");
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter rollnum: ");
    scanf("%d", &s.rollnum);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", s.name);
    printf("rollnum: %d\n", s.rollnum);
    printf("Marks: %.2f\n", s.marks);
     return 0;
}

// Program End
