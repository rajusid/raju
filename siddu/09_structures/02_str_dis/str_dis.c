/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_dis.c
 * Brief: a simple c program to add two distances in the inch-feet system using structure.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 02.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
// Main Function
struct Distance
{
    int feet;
    float inch;
};

int main() 
{
    struct Distance d1, d2, result;
    printf("Enter first distance :\n");
    printf("Enter feet:");
    scanf("%d",&d1.feet);
    printf("Enter inch:");
    scanf("%f",&d1.inch);
    printf("Enter second distance:\n");
    printf("Enter feet:");
    scanf("%d", &d2.feet);
    printf("Enter inch:");
    scanf("%f",&d2.inch);
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    if (result.inch > 12) 
    {
        result.inch -= 12;
        result.feet++;
    }

    printf("Sum of distances = %d\'-%.2f\"\n", result.feet, result.inch);

    return 0;
}

// Program End
