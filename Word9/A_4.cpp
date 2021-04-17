#include<iostream>
using namespace std;
int main(){
	int a=4;
	int *p=new int;
	p=&a;
	cout<<*p<<" "<<&p<<endl;
	cout<<a<<" "<<&a<<endl;
	delete p;
	
	//Vùng nh? c?a bi?n d?a phuong mà con tr? dang tr? t?i s? b? gi?i phóng, gây th?t thoát d? li?u
	
	cout<<*p<<" "<<&p<<endl;
	cout<<a<<" "<<&a<<endl;
	return 0;
}
