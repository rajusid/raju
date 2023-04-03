/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: goto.c
 * Brief: a simple c program to check whether the entered num is Even or Odd using goto statement, take number from user.
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
     printf("enter a number:\n");
     scanf("%d",&num);
        if (num % 2 == 0)
                goto even; 
        else
                goto odd; 
  
even:
	printf("given is even\n");
        return 0; 
odd:
        printf("given num is odd\n");
     
     return 0;
}

// Program End
