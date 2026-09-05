#include <stdio.h>
int main (){
char ch;                                //5
    printf ("enter the character");
    scanf("%c",&ch);
    if (ch>=97 && ch <=122){
    	printf("\n %c  is in lower case.",ch);
	}
	else {
			printf("\n %c  is not  in lower case.",ch);
	}	return 0;
}
