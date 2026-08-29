#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE NUMBER FOR a:");
	scanf("%d",&a);
	printf("ENTER THE NUMBER FOR b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The value of a is %d\n The value of b is %d",a,b);
	 return 0;
}

