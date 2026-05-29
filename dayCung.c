#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return x*x*x - x -1;
}

int main () {
	float a, b, e;
	float x1, err;
	int dem = 0;
	printf("Nhap a b sai so : ");
	scanf("%f%f%f", &a, &b, &e);
	
	do {
		dem++;
		x1=(a*f(b)-b*f(a)) / (f(b)-f(a));
		
		if(f(a)*f(x1)<0) {
			b=x1;
		}
		else {
			a=x1;
		}
		err = fabs(b-a);
		printf("\n%5d | %12.6f | %12.6f | %12.6f | %12.6f |", dem, a, b, x1, err);
	}
	while(err>=e);
	
	printf("\nNghiem x1 %f ", x1);
	
} 
