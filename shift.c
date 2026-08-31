#include<stdio.h>
int main()
{
int x,y;
//x=2;
printf("enter the number to be increased or decreased:");
scanf("%d",&x);
y= ++x + ++x + x++;

printf("x = %d y = %d",x,y);
return 0;
}
