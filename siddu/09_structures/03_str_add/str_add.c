/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_add.c
 * Brief: a simple c program to Add Two Complex Numbers by Passing Structure to a Function.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 02.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
struct Complex 
{
    float real;
    float imag;
};

struct Complex add(struct Complex c1, struct Complex c2);

int main() 
{
    struct Complex c1, c2, result;

    // input the first complex number
    printf("for first complex number\n");
    printf("Enter the real and imaginary parts:\n");
    scanf("%f%f", &c1.real, &c1.imag);

    // input the second complex number
    printf("for second complex number\n");
    printf("Enter the real and imaginary parts:\n");
    scanf("%f%f", &c2.real, &c2.imag);

    // add the complex numbers
    result = add(c1, c2);

    // display the result
    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);

    return 0;
}

struct Complex add(struct Complex c1, struct Complex c2) 
{
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

// Program End
