#include<stdio.h>
#include<stdlib.h>

int main () {
	int n, i, j, k;
	float s;
	printf("Nhap co matrix A : ");
	scanf("%d", &n);
	
	float a[n][n];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("Nhap a[%d][%d] : ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
	
	printf("\nNhap ve phai B : \n");
		
	float b[n];
	float x[100];
	
	for(i=0;i<n;i++) {
		printf("Nhap b[%d] : ", i);
		scanf("%f", &b[i]);
	}
	
	for(i=n-1;i>=0;i--) {
		s = b[i];
		for(j=i+1;j<n;j++) {
			s = s - a[i][j]*x[j];
		}
		x[i] = s/a[i][i];
	}
	
	printf("Ket qua nghiem : ");
	for(i=0;i<n;i++) {
		printf("x[%d] : %.2f ", i, x[i]);
	}
}
