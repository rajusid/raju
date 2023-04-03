/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: break.c
 * Brief: a simple c program to print number from 10 to 20 using loop .if number is greater than 15 the loop should break and come out of loop using break statement.
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
     int num=10;
     while(num<20)
     {

          printf("num:%d\n",num);
          num++;
          if(num>15)
          {
               break;
          }
     }
     return 0;
}

// Program End
