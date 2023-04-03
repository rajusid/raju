/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: arrasc.c
 * Brief:a simple c program to print one dimensional array in ascending order, take size and elements of array from user.
 * Author: RAJU
 * Title: Project Engineer
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int i,j,n,temp;
     printf("please enter the size of array:\n");
     scanf("%d",&n);
     int arr[n];
     printf("enter the elements of the array:\n");
     for(i=0; i<n; i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("your array is :\n");
     for(i=0; i<n; i++)
     {
          printf("%d ",arr[i]);
     }
     for(i = 0; i < n - 1; i++) 
     {
        for(j = 0; j < n - i - 1; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The sorted array in ascending order is:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
     return 0;
}

// Program End
