#include<stdio.h>
int main()
{
	int a,b,num;  
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	num=a;
	a=b;
	b=num;
	printf("value of a=%d\n",a);
	printf("value of b=%d\n",b);
	return 0; 
}                                                                                                                    
