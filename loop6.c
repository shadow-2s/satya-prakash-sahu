#include <stdio.h>

int main(){
int x;
printf("Enter the number up to which square to be printed . ");
scanf("%d",&x);
int i;
	for(i=1;i<=x;i++){
		printf("%d  ,",i*i);
	}
	return 0;
}
