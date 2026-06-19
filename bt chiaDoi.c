#include<stdio.h>
#include<math.h>

float f(float x) {
	return pow(x, 4)+2*(x*x*x)-x-1;
}

int main () {
	float a=0, b=1, e, err, x;
	printf("Nhap e : "); scanf("%f", &e);
	do {
		x=(a+b)/2;
		if(f(a)*f(x)>0) {
			a=x;
		}
		else {
			b=x;
		}
		err=fabs(b-a);
	}
	while(err>e);
	printf("Giao diem : %f", x);
}
