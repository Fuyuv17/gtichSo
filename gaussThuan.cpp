#include<stdio.h>
#include<stdlib.h>

int main () {
	int n, i, j, k;
	float t;
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
	
	for(i=0;i<n;i++) {
		printf("Nhap b[%d] : ", i);
		scanf("%f", &b[i]);
	}
	
	for(k=0;k<n-1;k++) {
		for(i=k+1;i<n;i++) {
			t = a[i][k]/a[k][k];
			for(j=k;j<n;j++) {
			a[i][j] = a[i][j] - t * a[k][j];
			}
			b[i] = b[i] - t * b[k];
		}
	}
	printf("\nMa tran tam giac A\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf(" %.2f ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nVecto b moi \n");
	for(i=0;i<n;i++) {
		printf(" %.2f ", b[i]);
	}
	return 0;
}  
