#include<stdio.h>

int main()
{
	int age;

	printf("enter the age: ");
	scanf("%d", &age);

	if(age >= 18)
	{
		printf("elgible for driving lisence.\n");
	}
	else
	{
		printf("not elgible for driving lisence.\n");
	}
	
	return 0;
}
