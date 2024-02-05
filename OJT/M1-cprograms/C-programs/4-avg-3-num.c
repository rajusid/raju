 #include<stdio.h>

int main()
{
	int n1, n2, n3, avg;

	printf("enter the three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	avg = (n1+n2+n3)/3;

	printf("average of three numbers: %d\n", avg);
	return 0;
}
