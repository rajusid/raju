/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: arithmeticoperator.c
 * Brief: a simple c program to add,subtract,multiply,divide,modulus,increment and decrement the numbers
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
     int a=10,b=15,c;
     c=a+b;
     printf("addition : a+b = %d\n",c);
     c=a-b;
     printf("subtraction : a-b = %d\n",c);
     c=a*b;
     printf("multiplication : a*b = %d\n",c);
     c=a/b;
     printf("division : a/b =%d\n",c);
     c=a%b;
     printf("modulo division : %d\n",c);
     c=a+1;
     printf("Increment the value of a :%d\n",c);
     c=b-1;
     printf("Decrement the value of b :%d\n",c);
     return 0;
}

// Program End
