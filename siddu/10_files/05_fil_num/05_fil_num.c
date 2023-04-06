/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:fil_num.c
 * Brief:a simple c program to Find the Number of Lines in a Text File.
 * Author:RAJU
 * Title: Project Engineer
 * Last Modified Date: 06.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main() 
{
    FILE *fp;
    char ch;
    int num_lines = 0;
    printf("Read the file and count the number of lines :\n");
    printf("------------------------\n");
    printf("Input the file name to be opened :\n");

    // Open the file for reading
    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Count the number of lines in the file
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            num_lines++;
        }
    }

    // Close the file
    fclose(fp);

    // Print the number of lines
    printf("The lines in the file test.txt are : %d\n", num_lines);

    return 0;
}

// Program End
