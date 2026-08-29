#include<stdio.h>
int main()
{
  float p,t,r,si;
	printf("ENTER THE PRINCIPAL AMOUMT :");
	scanf("%f",&p);
	printf("ENTER THE TIME OF INTREST IN YEAR :");
	scanf("%f",&t);
	printf("ENTER THE RATE OF INTEREST PER YEAR :");
	scanf("%f",&r);
	 si=(p*t*r)/100;
	 printf("the amount of intrest is %f",si);
	return 0;
}
