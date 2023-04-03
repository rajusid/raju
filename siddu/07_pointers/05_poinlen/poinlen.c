/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: point_len.c
 * Brief: calculate the length of the given string using pointer
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
   char str[100];
   char *p = str;
   int length = 0;
   printf("Enter the Input String:\n");
   scanf("%s",str);
   while (*p != '\0') 
   {
      length++;
      p++;
   }

   printf("The length of the given string %s is : %d\n", str, length);

  return 0;
}

// Program End
