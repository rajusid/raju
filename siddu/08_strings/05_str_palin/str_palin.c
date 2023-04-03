/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_palin.c
 * Brief: a simple c program to check whether given string is palindrome or not.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>
// Main Function
int main()
{
     char string[100];
     int i,len;
     int isPalindrome = 1;
     printf("Enter your string for palindrome:\n");
     scanf("%s",string);
     printf("Entered string is :%s\n",string);
     len=strlen(string);
     for(i=0; i<len/2; i++)
     {
          if(string[i] != string[len-i-1])
          {
               isPalindrome = 0;
               break;
          }
     }
     if(isPalindrome)
     {
          printf("Given string is %s in palindrom\n",string);
     }
     else
     {
          printf("Not palindrome");
     }


     return 0;
}

// Program End
