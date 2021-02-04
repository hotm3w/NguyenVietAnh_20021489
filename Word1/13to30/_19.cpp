#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	bool b;
	cout<<"Nhap vao ba so nguyen x,y,z: ";
	cin>>x>>y>>z;
	if((x>y&&y>z)||(x<y&&y<z)) b=true;
	else b=false;
	cout<<"Gia tri cua b: "<<b;
	return 0;
}
