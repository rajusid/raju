/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: str_count.c
 * Brief: a simple c program to count num of vowels,consonents and total alphabets in given string "How are you".
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>
// Main Function
int main()
{
     char str[]="How are you";
     int vowels=0,consonants=0,alphabets=0;
     int i;
     for(i=0;i<strlen(str);i++)
     {
          if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
          {
               alphabets++;
               if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
               {
                    vowels++;
               }
               else
               {
                    consonants++;
               }
          }
     }
     printf("Number of Alphabets in given string is : %d\n", alphabets);
     printf("Number of vowels in given string is : %d\n", vowels);
     printf("Number of consonants in given string is : %d\n", consonants);
     
     return 0;
}

// Program End
