#include<stdio.h>
#include<math.h>

float f(float x) {
	return sin(x)/(x*x+1);
}

int main () {
	int n, i, j;
	float a=2, b=3, X, p=0;
	printf("Nhap n va X : "); scanf("%d %f", &n, &X);
	float x[n], y[n];
	float h=(b-a)/(n-1);
	for(i=0;i<n;i++) {
		x[i]=a+i*h;
		y[i]=f(x[i]);
	}
	
	for(i=0;i<n;i++) {
		float d=1;
		for(j=0;j<n;j++) {
			if(i!=j) {
				d*=((X-x[j])/(x[i]-x[j]));
			}
		}
		p+=y[i]*d;
	}
	printf("Gt gan dung : %f", p);
}
