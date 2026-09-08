#include <stdio.h>
#include<math.h>
int main(){
int a,b,c,d;
printf ("Enter the coefficient of x^2 ,x and the constant .");
scanf("%d%d%d" ,&a,&b,&c);
d=b*b-4*a*c;
if (d>0){
	int x=(-b-sqrt(d))/2*a;
	int y=(-b+sqrt(d))/2*a;
	printf ("The roots are %d and %d",x,y);
}
else if (d==0){printf("both the numbe are same :\n");
int z =((-b)/2*a);
printf ("The roots is %d ",z);
}
else {printf("The roots are compex number.");
int i =-b/2*a;
int j=sqrt(-d)/2*a;
printf ("The roots is %d + %di",i,j);
}

	return 0;
}
