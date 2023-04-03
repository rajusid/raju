/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Natarajan S  ( natarajan.s@ruggedboard.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main() 
{
    char name[50], address[100], phone[20];
    FILE *file;

    // prompt the user to enter some information
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your address: ");
    scanf("%s", address);
    printf("Enter your phone number: ");
    scanf("%s", phone);

    // open the file for writing
    file = fopen("info.txt", "w");

    // write the information to the file
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Address: %s\n", address);
    fprintf(file, "Phone: %s\n", phone);

    // close the file
    fclose(file);

    printf("Information saved to file.\n");

     return 0;
}

// Program End
