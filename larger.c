#include<stdio.h>
int main()
{
int x,y,res; 
printf("enter the numbers for x and y");
scanf("%d %d",&x,&y);
res=(x>y)?x:y;
printf("x = %d y = %d \n the larger no is  %d",x,y,res);
return 0;
}
