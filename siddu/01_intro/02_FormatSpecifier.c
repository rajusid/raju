/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: formatspecifier.c
 * Brief: using format specifier in printf statement for int ,char,float,double and string
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
    int integerVariable = 123456;
    char charVariable = 'A';
    float floatVariable = 3.2;
    double doubleVariable =987.123456;
    char stringVariable[] = "ruggedboard";
    printf("integer is: %d\n", integerVariable);
    printf("char is: %c\n", charVariable);
    printf("float is: %f\n", floatVariable);
    printf("double is: %lf\n", doubleVariable);
    printf("string is: %s\n", stringVariable);

    return 0;
}

// Program End
