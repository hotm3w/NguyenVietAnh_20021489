#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x1,x2,y1,y2;
	cout<<"Nhap toa do diem A(x1,y1): ";
	cin>>x1>>y1;
	cout<<"Nhap toa do diem B(x2,y2): ";
	cin>>x2>>y2;
	cout<<"Khoang cach Eculid giua hai diem A va B: "<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return 0;
}
