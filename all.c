#include <stdio.h>
int main (){
	/*int x ;                                            //1
	printf ("enter a number ");
	scanf("%d",&x);
	if (x%2==0){printf ("%d is a even number ",x);
	}
	else {printf ("%d is a odd number",x);
	}*/
	
/*	int a,b;                                          //2
	printf("\n enter two number to be compire ");
	scanf ("%d%d",&a,&b);
	if(a>b){printf("%d is greater between %d and %d",a,a,b);
	}
	else{printf("%d is greater between %d and %d ",b,a,b);}*/
	
	
  /*  int c,d,e;                                           //3
    printf("\n enter three number to be compire ");
    scanf ("%d%d%d",&c,&d,&e);
   
	if (c > d && c > e) {
        printf("%d is the greatest number.\n", c);
    } 
    else if (d > c && d > e) {
        printf("%d is the greatest number.\n", d);
    } 
    else {
        printf("%d is the greatest number.\n", e);
    }*/
    
    char ch;                                //5
    printf ("enter the character");
    scanf("%c",&ch);
    if (ch>=97 && ch <=122){
    	printf("\n %c  is in lower case.",ch);
	}
	else {
			printf("\n %c  is not  in lower case.",ch);
	}
	
	char x;                                //6
    printf ("\n enter the character");
    scanf("%c",&x);
    if (x>=65 && x <=90){
    	printf("\nthe character is in upper case.");
	}
	else {
			printf("\n the character is  not in upper case.");
	}
	
/*	char ci;                                //7
    printf ("enter the character");
    scanf("%c",&ci);
    if (ci>=48 && ci >57){
    	printf("\nthe character is a digit .");
	}
	else {
			printf("\n the character is  not a digit .");
	}*/
	
/*	char cj;                                //8
    printf ("enter the character");
    scanf("%c",&cj);
    if (cj== 'a' || cj=='e' || cj== 'i' || cj== 'o' || cj== 'u' || cj== 'A' || cj== 'E' || cj== 'I' || cj== 'O' || cj== 'U'){
    	printf("\nthe character is a vowel .");
	}
	else {
			printf("\n the character is  not a vowel .");
	}*/
	
/*	char ck;                                //9
    printf ("enter the character");
    scanf("%c",&ck);
    if ((ck>= 65 && ck <=90) ||(ck>= 97 && ck <=112 )){
    	printf("\nthe character is a alphabet .");
	}
	else if (ck>= 48 && ck <=57){
			printf("\nthe character is a digit .");
	}
	else {
			printf("\n the character is  a symbol .");
	}*/
  

	return 0;
}
