#include<stdio.h> 
#include<stdlib.h>

float f(float x) {
	return 1/(1+x*x);
}

int main () {
	int n, i;
	float a, b, x;
	printf("Nhap n a b : ");
	scanf("%d%f%f", &n, &a, &b);
	
	if(n%2!=0) {
		printf("n la so le");
		return 1;
	}
	
	float h = (b-a)/n;
	
	float s = f(a) + f(b);
	
	for(i=1;i<n;i++) {
		x = a + i * h;
		s += 2 * f(x);
		if(i%2!=0) {
			s += 2 * f(x);
		}
	}
	s = (h/3) * s;
	printf("Gia tri gan dung cua tich phan : %f", s);
	return 0;
} 
