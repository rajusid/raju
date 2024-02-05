 #include<stdio.h>

int main()
{
	int V,I,R1,R2,R3,X;

	printf("enter the value of voltage: \n");
	scanf("%d",&V);

	printf("enter the value of current: \n");
	scanf("%d", &I);

	printf("enter the value of resistance(R1): \n");
	scanf("%d", &R1);

	printf("enter the value of resistance(R2): \n");
        scanf("%d", &R2);

	printf("enter the value of resistance(R3): \n");
        scanf("%d", &R3);

	X = (R2/R1)*R3;

	printf("the value of unknown resistance(X):%d\n",X);
	return 0;
}
