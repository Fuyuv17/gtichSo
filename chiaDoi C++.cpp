#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

float f(float x){
	return (x*x - 2);
}
using namespace std;

int main(){
	float a, b, err, x0, saiso;
	int it = 1, max_it=100;
	
    cout<< setprecision(6)<< fixed;

	 cout<<"Nhap a, b, err: ";
	 cin>>a>>b>>err;
	 cout<< endl<<"*********************"<< endl;
	 cout<<"Bisection Method"<< endl;
	 cout<<"*********************"<< endl;
	 do
	 {
		x0 = (a+b)/2;
		if(f(x0)*f(a)>0){
			a=x0;
		}
		else 
			b=x0;
	 } while(fabs(b-a)>=err);

	 cout<< endl <<"Nghiem gan dung: "<< x0;
	 return 0;
}
