/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: chg-cas.c
 * Brief: a simple c program to change case of the given string "PHYTEC".
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date:01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>

// Main Function
int main() 
{
    char str[] = "PHYTEC";
    int i;

    printf("PHYTEC \n");

    
    for(i = 0; i < strlen(str); i++) 
    {
     
        if(str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] += 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] -= 32;
        }
    }

    printf("the changed case is: %s\n", str);

    return 0;
}

// Program End
