#include<stdio.h>
int main(){
char ch;
printf("Enter a lower case alphabet.");
scanf("%c",&ch);
if (ch>=97 && ch<=122){
if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
	printf("%c is a vowel.",ch);
}
else {
		printf("%c is a consonant.",ch);
}
}
else{
	printf("INVALID INPUT !!  \n Enter a lower case alphabet. ");
}
	return 0;
}
