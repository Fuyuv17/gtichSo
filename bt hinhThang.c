#include<stdio.h>
#include<math.h>

float f(float x) {
	return sin(pow(x, 2))/(pow(x, 3)+3);
}

int main () {
	int n, i;
	float x;
	
	float a=1, b=5, s;
	printf("Nhap n : ");
	scanf("%d", &n);
	
	float h=(b-a)/n;
	s=(f(a)+f(b));
	for(i=1;i<n;i++) {
		x=a+i*h;
		s+=2*f(x);
	}
	printf("Gt : %f", s*(h/2));
} 
