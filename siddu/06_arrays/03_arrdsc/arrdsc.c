/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: arrdesc.c
 * Brief:a simple c program to print one dimensional array in descending order, take size and elements of array from user.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 31.03.2023
 /**********************************************************/
 
 //headerfile
 #include <stdio.h>

int main() 
{
    int size, temp;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("your array is :");
    for(int i=0; i<size; i++)
    {
     printf("%d ",arr[i]);
    }
    for (int i = 0; i < size; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\nArray in descending order: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
