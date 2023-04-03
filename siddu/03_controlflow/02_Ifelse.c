/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: ifelse.c
 * Brief: a simple c program to check the entered number is greater than 20 or Less than 20.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 29.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int num;
     printf("enter a number :\n");
     scanf("%d",&num);
     if(num>20)
     {
          printf("the number is greater than 20\n", num);
     }
     else
     {
          printf("the number is less than 20\n", num);
     }
     return 0;
}

// Program End
