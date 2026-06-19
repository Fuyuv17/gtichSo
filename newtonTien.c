#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return pow(5, x)+cos(x);
}

int main () {
	int n, i, j;
	float x, a=2, b=5;
	
	printf("Nhap so diem n va x* : "); 
	scanf("%d%f", &n, &x);
	
	float h=(b-a)/(n-1);
	float y[n];
	
	for(i=0;i<n;i++) {
		y[i]=(f(a+i*h));
	}
	
	float D[n];
	for(i=0;i<n-1;i++) {
		D[i] = (y[i+1]-y[i]);
	}
	
	float t=(x-a)/h;
	float f=y[0]+t*D[0];
	for(j=2;j<n;j++) {
		for(i=0;i<n-j-1;i++) {
			D[i]=(D[i+1]-D[i]);
		}
		t=t*(t-j+1)/j;
		f=f+t*D[0];
	}
	printf("\nGia tri gan dung cua f(%.2f) la %f ", x, f);
}
