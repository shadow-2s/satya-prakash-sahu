#include<stdio.h>
int main()
{
  float w,x,y,z;
	printf("ENTER LENGTH OF THE RECTNGLE :");
	scanf("%f",&x);
	printf("ENTER WIDTH OF THE RECTNGLE :");
	scanf("%f",&w);
	  y=x*w;
      z=2*(x+w);
	printf("The LENGTH OF THE RECTNGLE  %f\n The width OF THE RECTNGLE  %f\n The area of rectangle is %f\n And the perimeter of rectangle  is %f ",x,w,y,z);
	return 0;
}
