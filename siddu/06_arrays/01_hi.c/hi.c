/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: hi.c
 * Brief: if user enter "hi" then output print "Hello" else print "not enter hi"
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>
int main() 
{
    char input[10];
    printf("Enter a string: ");
    scanf("%s", input);
    
    if(strcmp(input, "hi") == 0) 
    {
        printf("Hello\n");
    }
    else 
    {
        printf("not enter hi\n");
    }
    return 0;
}

// Program End
