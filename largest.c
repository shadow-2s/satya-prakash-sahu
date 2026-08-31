#include<stdio.h>
int main()
{
int x,y,z; 
printf("enter the numbers for x  ,y and z");
scanf("%d %d %d",&x,&y,&z);
(x>z)?(x>y)?printf("x is greater "):printf("x is greater "):(z>y)?printf("z is greater "):printf("yis greater ");
return 0;
}
