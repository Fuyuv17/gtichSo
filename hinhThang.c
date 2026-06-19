#include <stdio.h>
#include<math.h>

float f(float x) {
	return pow(sin(x), 4)+pow(x, 3);
}

int main () {
	int n, i;
	float a=2, b=6, x;
	
	printf("Nhap n : ");
	scanf("%d", &n);
	
	float h = (b-a)/n;
	float s =(f(a)+f(b));
	
	for(i=1;i<n;i++) {
		x = a + i * h;
		s += f(x)*2;
	}
	printf("Gia tri gan dung cua tich phan : %f", s*(h/2));
	return 0;
} 
