#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
	int n, i, j;
	float X;
	
	printf("Nhap n : ");
	scanf("%d", &n);
	
	float x[n], y[n];
	
	printf("Nhap moc x : \n");
	for(i=0;i<n;i++) {
		printf("Nhap x[%d] : ", i);
		scanf("%f", &x[i]);
		printf("Nhap y[%d] : ", i);
		scanf("%f", &y[i]);
	}
	
	printf("Nhap x* : ");
	scanf("%f", &X);
	
	double h = x[1] - x[0];
	float D[n];
	
	for(i=0;i<n;i++) {
		D[i] = y[i];
	}
	
	for(i=0;i<n-1;i++) {
		D[i]=D[i+1]-D[i];
	}
	
	float t0=(X-x[0])/h;
	float t=t0;
	float f=y[0]+t*D[0];
	
	for(j=2;j<n;j++) {
		for(i=0;i<n-j;i++) {
			D[i]=D[i+1]-D[i];
		}
		t*=(t0-j+1)/j;
		f+=t*D[0];
	}
	printf("Gia tri f(%f) : %.2f ", X, f);
} 
