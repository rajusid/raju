/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:arrmerg.c 
 * Brief: a simple c program to print one dimensional array after merge two one dimensional array, take size and elements of first and sec array from user.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() 
{
    int size1, size2;
    
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    
    int arr1[size1];
    
    printf("Enter elements of first array: ");
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("your first array is:\n");
    for(int i=0; i<size1; i++)
    {
     printf("%d ",arr1[i]);
    }
    
    printf("\nEnter size of second array:\n ");
    scanf("%d", &size2);
    
    int arr2[size2];
    
    printf("Enter elements of second array:\n ");
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    printf("your second array is :");
    for(int i=0; i<size2; i++)
    {
     printf("%d ",arr2[i]);
    }
    int merged[size1 + size2];
    int index = 0;
    
    for (int i = 0; i < size1; i++) 
    {
        merged[index] = arr1[i];
        index++;
    }
    
    for (int i = 0; i < size2; i++) 
    {
        merged[index] = arr2[i];
        index++;
    }
    
    printf("\nMerged array: ");
    for (int i = 0; i < size1 + size2; i++) 
    {
        printf("%d ", merged[i]);
    }
     return 0;
}

// Program End
