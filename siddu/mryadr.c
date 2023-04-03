#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("size of int is: %ld\n",sizeof(int));
    for (int i=0; i<5; i++)
    {
        printf("address of arr[%d]is %p\n",i,&arr[i]);
    }
return 0;

}