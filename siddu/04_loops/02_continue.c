/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: continue.c
 * Brief: a simple c program to print num from 10 to 20 using loop.but it should escape 15 using continue statement.
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
     int num = 10; 
        do
        {
		if( num == 15) 
                {
                        num = num+ 1; 
                        continue; 
                }
                printf("num:%d\n", num); 
		num++;
        }while( num < 20 ); 
     return 0;
}

// Program End
