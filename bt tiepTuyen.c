#include<stdio.h>
#include<math.h>

double f(float x) {
	return pow(x, 4)-3*(x*x)+75*x-10000;
}

double df(float x) {
	return 4*pow(x, 3)-6*x+75;
}

int main () {
	int dem = 0;
	double e, x, x1, err;
	printf("Nhap x va sai so : ");
	scanf("%lf%lf", &x, &e);
	do {
		x1=x-f(x)/df(x);
		err=fabs(x1-x);
		printf("\n%5d | %12.6lf | %12.6lf", dem, x, x1);
		x=x1;
		dem++;
	}
	while(err>e);
	printf("\nGiao diem : %lf ", x1);
} 
