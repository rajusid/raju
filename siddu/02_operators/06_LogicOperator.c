/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: logicaloperator.c
 * Brief: a simple c program to print value using logical operator 
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
     int i = 5, j = 5, k = 10;

  printf("i is equal to j or k greater than j is  %d \n", (i == j) && (k > j));

  printf("i is equal to j or k less than j is %d \n", (i == j) || (k < j));

  printf("i not equal to j or k less than j is %d \n", (i != j) || (k < j));
     return 0;
}

// Program End
