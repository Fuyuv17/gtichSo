#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
	int n, i, j;
	float x, xn, h;
	
	printf("Nhap so diem n : "); 
	scanf("%d", &n);
	
	printf("Nhap xn : ");
	scanf("%f", &xn);
	
	printf("Nhap buoc nhay h : ");
	scanf("%f", &h);
	
	float y[n+1];
	for(i=0;i<=n;i++) {
		printf("Nhap y[%d] : ", i);
		scanf("%f", &y[i]);
	}
	
	printf("Nhap x* can tinh : ");
	scanf("%f", &x);
	
	float t = (x-xn)/h;
	float D[n+1];
	
	for(i=n;i>0;i--) {
		D[i] = (y[i]-y[i-1]);
	}
	
	float f = y[n]+t*D[n];
	
	for(j=2;j<=n;j++) {
		for(i=n;i>=j;i--) {
			D[i] = (D[i]-D[i-1]);
		}
		t = t*(t+j-1)/j;
		f = f+t*D[n];
	}
	printf("\nGia tri gan dung cua f(%.2f) la %f ", x, f);
}
