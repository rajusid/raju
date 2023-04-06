/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:fil_count.c
 * Brief:a simple c program to count number of words and characters in a file. 
 * Author:RAJU
 * Title: Project Engineer
 * Last Modified Date: 06.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *fp;
    char str[100];
    char ch;
    int num_words = 0, num_chars = 0, in_word = 0;
    printf("Count the number of words and characters in a file :\n");
    printf("----------------------\n");
    printf("Input the filename to be opened :");
    scanf("%s",str);

    // Open the file for reading
    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Count the number of words and characters in the file
    while ((ch = fgetc(fp)) != EOF) {
        num_chars++;

        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            num_words++;
        }
    }

    printf("hello guys\n");
    printf("hows your course going on\n");

    // Close the file
    fclose(fp);

    // Print the number of words and characters
    printf("The number of words in the  file test.txt are: %d\n", num_words);
    printf("The number of characters in the  file test.txt are : %d\n", num_chars);

     return 0;
}

// Program End
