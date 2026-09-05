#include <stdio.h>
#include <math.h>
int main (){
float a,b,c,d,e,x;
printf("\n enter the co-efficint value of x^2 and x . Also enter  the constant .\n * Please enter in order.  ");
    scanf ("%f%f%f",&a,&b,&c);
    x=(b*b)-(4*a*c);
    if(x>0)
	{
    	d=((-b+sqrt((b*b)-(4.0*a*c)))/(2.0*a));
    	e=((-b-sqrt((b*b)-(4.0*a*c)))/(2.0*a));
    	printf("the roots are %f and %f",d,e);
	}
	return 0;
}
