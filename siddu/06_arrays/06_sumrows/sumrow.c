/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: sumrow.c
 * Brief: Write a simple c program to calculate sum of individual rows,take num of rows and columns from user and also matrix elements.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

 #include <stdio.h>
int main() 
{
    int rows, cols;
    
    printf("Enter number of rows and cols: ");
    scanf("%d%d", &rows,&cols);
    
    int matrix[rows][cols];
    
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("the given Matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) 
    {
        int sum = 0;
        for (int j = 0; j < cols; j++) 
        {
            sum += matrix[i][j];
        }
        printf("sum of Row %d: %d\n", i+1, sum);
    }
     return 0;
}

// Program End
