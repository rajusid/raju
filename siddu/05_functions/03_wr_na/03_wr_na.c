/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:wrna.c
 * Brief: add two numbers using user defined function sum of int return type and no arguments are passing to this function.Call this user defined sum function from main().
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date:29.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"wr_na.h"

int sum ()//function declaration
{
   int a,b,c;
   printf("enter 2 numbers:");
   scanf ("%d%d", &a, &b);
   c = a+b;
   return c;
}
 

// Program End
