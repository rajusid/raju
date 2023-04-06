/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: fil_cr.c
 * Brief: a simple c program to create and store information in a text file.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 06.04.2023
 *
/*********************************************************************************************/

// Header File
#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    fp = fopen("test.txt", "w");
    if (fp== NULL) 
    {
        printf("Failed to open file.\n");
        return 1;
    }

    fprintf(fp, "Input a sentence for the file : Welcome to Rugged Board\n");
    fclose(fp);

    printf("The file test.txt created successfully...!!\n");

    return 0;
}
// Program End
