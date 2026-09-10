#include <stdio.h>

int main(){
int x,c ,a=0,b=1;
printf("Enter the number of to which the fiboncci series to be printed . ");
scanf("%d",&x);
printf("%d %d ",a,b);
int i;
	for(i=3;i<=x;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
