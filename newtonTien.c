#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return pow(5, x)+cos(x);
}

int main () {
	int n, i, j;
	float X, a=2, b=5;
	
	printf("Nhap so diem n va x* : "); 
	scanf("%d%f", &n, &X);
	
	float h=(b-a)/(n-1);
	float y[n];
	
	for(i=0;i<n;i++) {
		y[i]=f(a+i*h);
	}

	float t=(X-a)/h;
	float p=y[0]; 
	float s=1;    
	
	for(j=1; j<n; j++) {
		for(i=0;i<n-j;i++) {
			y[i]=y[i+1]-y[i];
		}
		s*=(t-j+1)/j;
		p+=s*y[0];
	}
	printf("\nGia tri gan dung cua f(%.2f) la %f ", X, p);
}
