#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a & b");
	scanf("%d %d", &a, &b);
	printf("Before swapping a =%d and b = %d\n", a, b);
	a =b+a;
	b =a-b;
	a =a-b;
	printf("After swapping a = %d and b = %d", a, b);
	return 0;
}
