#include <stdio.h>
int main (){
	int x;
	printf ("enter a number between 0 to 6");
	scanf("%d",&x);
	if(x==0){
		printf ("sunday");
	}
	else if(x==1){
		printf ("monday");
	}else if(x==2){
		printf ("tuesday");
	}else if(x==3){
		printf ("wednesday");
	}else if(x==4){
		printf ("thursday");
	}else if(x==5){
		printf ("friday");
	}else if(x==6){
		printf ("saturday");
	}
	else{
			printf (" invalid input\n enter a number between 0 to 6");
		
	}
	
	return 0;
}

