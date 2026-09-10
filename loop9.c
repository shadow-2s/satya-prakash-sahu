#include <stdio.h>

int main(){
int x,f=0;
printf("Enter the number up to which prime number are to be search. ");
scanf("%d",&x);

int i;
	for(i=1;i<=x;i++){
		if (x%i==0){
			f++;
		}
		}
		if (f==2){
			printf(" %d is a prime numbers .",x);
		}
		else {	printf(" %d is  not  a prime numbers .",x);
	
	}
	return 0;
}
