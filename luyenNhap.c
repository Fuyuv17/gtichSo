#include<stdio.h>
#include<math.h>

float f(float x) {
	return pow(x, 4)-3*(x*x)+75*x-10000;
}

float df(float x) {
	return 4*(x*x*x)-6*x+75;
}

int main () {
	
	float x, x1, e, err;
	printf("Nhap e va x : "); scanf("%f%f", &e, &x1);
	do {
		x=x1-(f(x)/df(x));
		err=fabs(x-x1);
		x1=x;
	}
	while(err<e);
	printf("%f", x);
	return 0;
}
