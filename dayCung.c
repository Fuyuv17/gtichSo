#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return pow(3, x)-5*x-8;
}

int main () {
	float a, b, x1, err, e;
	int dem = 0;
	printf("Nhap a b sai so : ");
	scanf("%f%f%f", &a, &b, &err);
	float x0=a;
	
	do {
		dem++;
		x0=x1;
		x1=(a*f(b)-b*f(a)) / (f(b)-f(a));
		
		e = fabs(x1-x0);
		if(f(a)*f(x1)<0) {
			b=x1;
		}
		else {
			a=x1;
		}
		printf("\n%5d | %12.6f | %12.6f | %12.6f ", dem, a, b, x1);
	}
	while(e>=err);
	
	printf("\nNghiem x1 %f ", x1);
	
} 
