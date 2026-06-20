#include<stdio.h>
#include<math.h>

int main () {
	int n, i, j;
	float X, s=1;
	printf("Nhap n moc va X : "); scanf("%d%f", &n, &X);
	float x[n], y[n];
	
	printf("Nhap bang ns : \n");
	for(i=0;i<n;i++) {
		scanf("%f%f", &x[i], &y[i]);
	}
	float h=x[1]-x[0];
	float t=(X-x[0])/h;
	float p=y[0];
	for(j=1;j<n;j++) {
		for(i=0;i<n-j;i++) {
			y[i]=y[i+1]-y[i];
		}
		s*=(t-j+1)/j);
		p+=s*y[0];
	}
	printf("Gt can noi suy f(%f) : %f", X, p);
	return 0;
}
