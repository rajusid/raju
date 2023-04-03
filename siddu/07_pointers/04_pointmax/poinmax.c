/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: poin_max.c
 * Brief: a simple c program to find the maximum number between two numbers using a pointer.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("Pointer : Find the maximum number between two numbers :\n");
    printf("---------------\n");
    printf("Input the first number :\n");
    scanf("%d",&num1);
    printf("Input the second  number :\n");
    scanf("%d",&num2);
    if(*ptr1>*ptr2)
    {
     printf("%d is the maximum number .\n",*ptr1);
    }
    else
    {
     printf("%d is the maximum number.\n",*ptr2);
    }
     return 0;
}

// Program End
