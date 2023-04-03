#include<stdio.h>
int main() 
{
  int rollno[10]; // array declaration

  int i;
  for (i = 0; i < 10; i++) 
  {
    rollno[i] = i + 1; // accessing elements of array and assigning value to them.
    printf("rollno[%d] = %d\n", i, rollno[i]);
  }

  return 0;
}