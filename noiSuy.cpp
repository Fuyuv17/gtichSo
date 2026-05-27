#include <stdio.h>
#include<stdlib.h>

int main () {
	int n, i, j;
	float X, P = 0, D;
	printf("Nhap n va X : ");
	scanf("%d %f", &n, &X);
	
	float x[n], y[n];
	
	printf("Nhap cac diem x : ");
	for(i=0;i<n;i++) {
		scanf("%f", &x[i]);
	}
	printf("Nhap cac diem y : ");
	for(i=0;i<n;i++) {
		scanf("%f", &y[i]);
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
	printf("Gia tri can noi suy la %f", P);
	return 0;
}
