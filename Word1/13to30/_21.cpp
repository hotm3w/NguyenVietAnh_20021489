#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	cout<<"Nhap vao 3 canh tam giac a,b,c: ";
	cin>>a>>b>>c;
	double p=(a+b+c)/2;
	cout<<"Dien tich tam giac 3 canh a,b,c: "<<sqrt(p*(p-a)*(p-b)*(p-c));
	return 0;
}
