#include<stdio.h>
#include<math.h>

float f(float x) {
	return pow(3, x)-5*x-8;
}

int main () {
	float a=1, b=4, x, e, err, x0=a;
	printf("Nhap e : "); scanf("%f", &e);
	
	do {
		x0=x;
		x=(a*f(b)-b*f(a))/(f(b)-f(a));
		if(f(x)*f(a)>0) {
			a=x;
		}
		else {
			b=x;
		}
		err=fabs(x-x0);
	}
	while(err>=e);
	printf("Giao diem : %f ", x);
}
 
