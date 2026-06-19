#include<stdio.h>
#include<math.h>

int main () {
	int bac, i, j, n;
	printf("Nhap bac : ");
	scanf("%d", &bac);
	
	float arr[bac+1];
	printf("Nhap he so : ");
	for(i=0;i<=bac;i++) {
		scanf("%f", &arr[i]);
	}
	
	float a=-5, b=5, s=0, x, sa=0, sb=0, sx;
	printf("Nhap n khoang chia : ");
	scanf("%d", &n);
	
	float h = (b-a)/n;
	for(i=0;i<=bac;i++) {
		sa+=arr[i]*pow(a, i);
		sb+=arr[i]*pow(b, i);
	}
	s=sa+sb;

	for(i=1;i<n;i++) {
		x=a+i*h;
		sx=0;
		for(j=0;j<=bac;j++) {
			sx+=arr[j]*pow(x, j);
		}
		s+=2*sx;
		if(i%2!=0) {
			s+=2*sx;
		}
	}
	printf("Gt gan dung : %f ", s*(h/3));
	return 0;
} 
