#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x) {
	return x*x - 2;
}

int main () {
	float a, b, err, x;
	
	printf("Nhap a b err : ");
	scanf("%f%f%f", &a, &b, &err);
	
	do {
		x = (a+b)/2;
		if(f(a)*f(x)>0) {
			a=x;
		}
		else {
			b=x;
		}
	}
	while(fabs(b-a)>=err);
	printf("Nghiem la %f", x);
	return 0;
} 
