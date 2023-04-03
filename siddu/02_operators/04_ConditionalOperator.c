/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: conditionaloperator.c
 * Brief: a simple c program to print biggest of two numbers using ConditionalOperator
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
     int num1,num2;
     int greater;

     printf("enter two numbers:\n");
     scanf("%d%d",&num1,&num2);
     greater = num2>num1 ? num2: num1;
     printf("%d is greater than %d",greater);  
     return 0;
}

// Program End
