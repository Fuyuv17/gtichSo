#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f1(x,y,z,p)  (y - 2*z + 3*p) / 10.0
#define f2(x,y,z,p)  (-x + z - 2*p + 5.0) / 10.0
#define f3(x,y,z,p)  (-2*x - 3*y + p - 10.0) / 20.0
#define f4(x,y,z,p)  (-3*x - 2*y - z + 15.0) / 20.0

int main () {
	float x0=0, y0=0, z0=0, p0=0, x1, y1, z1, p1, e1, e2, e3, e4, e;
	int it=1;
	printf("Nhap sai so : ");
	scanf("%f", &e);

	printf("\nIter\tx\t\ty\t\tz\t\tp\n");

	do {
		x1 = f1(x0,y0,z0,p0);
		y1 = f2(x0,y0,z0,p0);
  		z1 = f3(x0,y0,z0,p0);
  		p1 = f4(x0,y0,z0,p0);
  		
  		printf("%d\t%f\t%f\t%f\t%f\n", it, x1, y1, z1, p1);
  		
  		e1 = fabs(x0-x1);
  		e2 = fabs(y0-y1);
  		e3 = fabs(z0-z1);
  		e4 = fabs(p0-p1);
  		it++;
  		
  		x0 = x1;
  		y0 = y1;
 		z0 = z1;
		p0 = p1;
	}
	while(e1>e || e2>e || e3>e|| e4>e);
	printf("\nNghiem : x = %f y = %f z = %f p = %f", x1, y1, z1, p1);
}
