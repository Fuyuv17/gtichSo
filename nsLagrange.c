#include <stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return pow(5, x)+cos(x);
}

int main () {
	int n, i, j;
	float X, P = 0, D, a=2, b=3;
	printf("Nhap n va X : ");
	scanf("%d %f", &n, &X);
	
	float x[n], y[n];
	
/*	printf("Nhap cac diem x : ");
	for(i=0;i<n;i++) {
		scanf("%f", &x[i]);
	}
	printf("Nhap cac diem y : ");
	for(i=0;i<n;i++) {
		scanf("%f", &y[i]);
	}
	
	TH de bai cho truoc bang de nhap tay 
*/ 
	float h = (b-a)/(n-1);
	for(i=0;i<n;i++) {
		x[i]=a+i*h;
		y[i]=f(x[i]);
		
	}
	for(i=0;i<n;i++) {
		D = 1;
		for(j=0;j<n;j++) {
			if(j!=i) {
				D *= (X-x[j])/(x[i]-x[j]);
			}
		}
		P += y[i]*D;
	}
	printf("\nGia tri can noi suy la %f", P);
	return 0;
}
