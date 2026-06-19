#include<stdio.h>
#include<math.h>

int main () {
	int n, i, j, k;
	float t, s;
	
	printf("Nhap co matrix : "); scanf("%d", &n);
	float a[n][n], b[n], x[n];
	
	printf("Nhap ma tran : \n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%f", &a[i][j]);
		}
	}
	printf("Nhap B : \n");
	for(i=0;i<n;i++) {
		scanf("%f", &b[i]);
	}
	for(k=0;k<n-1;k++) {
		for(i=k+1;i<n;i++) {
			t=a[i][k]/a[k][k];
			for(j=k;j<=n;j++) {
				a[i][j]-=t*a[k][j];
			}
			b[i]-=t*b[k];
		}
	}
	for(i=n-1;i>=0;i--) {
		s=b[i];
		for(j=i+1;j<n;j++) {
			s-=a[i][j]*x[j];
		}
		x[i]=s/a[i][i];
	}
	printf("Nghiem : ");
	for(i=0;i<n;i++) {
		printf("x[%d] = %f\n", i, x[i]);
	}
}
