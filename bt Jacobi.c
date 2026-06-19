#include<stdio.h>
#include<math.h>

#define f1(x,y,z) (-y-2*z-15.0)/-7.0
#define f2(x,y,z) (-4*x-3*z-13.0)/-8.0
#define f3(x,y,z) (-x-2*y-13.0)/-9.0

int main () {
	float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3,e;
	printf("Sai so : "); scanf("%f", &e);
	
	do {
		x1=f1(x0,y0,z0);
		y1=f2(x0,y0,z0);
		z1=f3(x0,y0,z0);
		
		e1=fabs(x0-x1);
		e2=fabs(y0-y1);
		e3=fabs(z0-z1);
		
		x0=x1;
		y0=y1;
		z0=z1;
	}
	while(e1>e||e2>e||e3>e);
	printf("Nghiem : x= %f y= %f z= %f", x1,y1,z1);
}
