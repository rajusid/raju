/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:fil_wr.c
 * Brief: a simple c program to write multiple lines in a text file.
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
    char str[100];
    int n;
    printf("Input the number of lines to be written :\n");
    scanf("%d",&n);

    // Open file for writing
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write multiple lines to file
    //fprintf(fp, "This is line 1\n");
    fprintf(fp, "hello guys\n");
    fprintf(fp, "hows your course going on\n");
     printf("\nData written to the file test.txt successfully!\n");
    // Close the file
    fclose(fp);
     return 0;
}

// Program End
