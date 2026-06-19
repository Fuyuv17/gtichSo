#include<stdio.h> 
#include<math.h>

float f(float x) {
	return pow(sin(x), 4)+pow(cos(x), 4);
}

int main () {
	int i, n=10;
	float a=7, b=10, x;
	float h=(b-a)/n;
	float s=f(a)+f(b);
	for(i=1;i<n;i++) {
		x=a+i*h;
		s+=s*f(x);
		if(i%2!=0) {
			s+=s*f(x);
		}
	}
	printf("Gt gan dung : %f", s*(h/3));
} 
