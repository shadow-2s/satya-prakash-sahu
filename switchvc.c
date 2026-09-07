#include<stdio.h>
int main(){
char ch;
printf("Enter a lower case alphabet.");
scanf("%c",&ch);
switch (ch){
	case 'a':printf("%c is a vowel.",ch);break;
	case 'e':printf("%c is a vowel.",ch);break;
	case 'i':printf("%c is a vowel.",ch);break;
	case 'o':printf("%c is a vowel.",ch);break;
	case 'u':printf("%c is a vowel.",ch);break;
	
	default :if (ch>=97 && ch<=122)printf("%c is a consonant.",ch);else if (!(ch>=97 && ch<=122)){printf("INVALID INPUT !!  \n Enter a lower case alphabet. ");
	}
}
	return 0;
}
