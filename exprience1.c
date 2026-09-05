#include <stdio.h>
int main (){
int c,d,e;                                           //3
    printf("\n enter the experience of manvi , shivam and william .\n * Please enter in order.  ");
    scanf ("%d%d%d",&c,&d,&e);
   
	if (c > d && c > e) {
        printf("manvi is the most experienced and he will be the team leader.\n");
    } 
    else if (d > c && d > e) {
        printf("shivam is the most experienced and he will be the team leader.\n");
    } 
    else {
        printf("william is the most experienced and he will be the team leader.\n");
    }
    	return 0;
}
