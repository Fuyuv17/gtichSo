#include <stdio.h>
#include<stdlib.h>

float f(float x) {
	return x*x;
}

int main () {
	int n, i;
	float a, b, x;
	
	printf("Nhap n a b : ");
	scanf("%d%f%f", &n, &a, &b);
	
	float h = (b-a)/n;
	float s = 0.5 * (f(a)+f(b));
	
	for(i=0;i<n;i++) {
		x = a + i * h;
		s += f(x);
	}
	printf("Gia tri gan dung cua tich phan : %f", s*h);
	return 0;
} 
