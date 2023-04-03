/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:nrna.c 
 * Brief:add two numbers using user defined function sum of no return type and no arguments are passing to this function.Call this user defined sum function from main().

 * Author: RAJU
 * Title: Program engineer
 * Last Modified Date: 29.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"01_nr_na.h"
void sum()
{
	int num1, num2, result;

     printf("Enter two numbers: ");
     scanf("%d %d", &num1, &num2);

     result = num1 + num2;

     printf("Sum = %d\n", result);
}



// Program End
