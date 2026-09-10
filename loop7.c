#include <stdio.h>

int main(){
int x;
printf("Enter the number which table to be printed . ");
scanf("%d",&x);
int i;
	for(i=1;i<=10;i++){
		printf(" %d * %d = %d \n",x,i,x*i);
	}
	return 0;
}
