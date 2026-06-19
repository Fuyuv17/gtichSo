#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return x*x*x - 2*x -5;
}

float df(float x) {
	return 3*x*x-2;
}

int main () {
	int dem = 0;
	float x, e, x1, err;
	printf("Nhap x e : ");
	scanf("%f%f", &x, &e);
	do {
		dem++;
		x1 = x - f(x)/df(x);
		err = fabs(x1-x);
		printf("\n%5d | %12.6f | %12.6f", dem, x, x1);
		x = x1;
	}
	while(err>e);
	printf("\nSo lan lap : %d", dem);
	printf("\nNghiem la %f", x1);
	return 0;
}
