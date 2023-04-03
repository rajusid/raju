/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Bitwiseoperator.c
 * Brief: a simple c program to show usage of bitwise operators & , | ,  ^ , ~ , << , >>
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
     int a = 50;      
	int b = 5;    
	int result = 0;   
	result = a | b;
	printf("Binary OR Operator of a and b is %d\n", result );      
	result = a & b;
	printf("Binary AND Operator of a and b is %d\n", result );
	result = a ^ b;
	printf("Binary XOR Operator of a and b is %d\n", result );
	result = ~a;
	printf("Binary Ones Complement Operator of a is %d\n", result );
	result = a << 2;
	printf("Binary Left Shift Operator of a is %d\n", result );
	result = a >> 2;
	printf("Binary Right Shift Operator of a is %d\n", result );
     return 0;
}

// Program End
