#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return x*x -2;
}

float df(float x) {
	return 2*x;
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
		x = x1;
	}
	while(err>e);
	printf("\nSo lan lap : %d", dem);
	printf("Nghiem la %f", x1);
	return 0;
}
