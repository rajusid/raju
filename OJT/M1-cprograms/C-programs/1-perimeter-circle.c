#include<stdio.h>

int main()
{
	int r;
	printf("enter the radius: ");
	scanf("%d", &r);
	
	int perimeter = 2*3.14*r;

	printf("perimeter of circle is: %d\n", perimeter);
	return 0;
}
