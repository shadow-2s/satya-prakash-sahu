#include<stdio.h>
int main()
{
  float x,y,z;
	printf("ENTER RADIUS OF CIRCLE :");
	scanf("%f",&x);
	  y=3.141*x*x;
      z=2*3.141*x ;
	printf("The radius of circe is %f\n The area of circle is %f\n And the perimeter of circle is %f ",x,y,z);
	return 0;
}
