#include<stdio.h>
int main()
{
	int x,cube,c;
	printf("Enter a positive number: ");
	scanf("%d",&x);
	if (x>0){
		cube=x*x*x;
     	printf("The cube of %d is %d",x,cube);
	}
		return 0;	
}

