#include<iostream>
using namespace std;
int main(){
	int a=4;
	int *p=new int;
	p=&a;
	cout<<*p<<" "<<&p<<endl;
	cout<<a<<" "<<&a<<endl;
	delete p;
	
	//V�ng nh? c?a bi?n d?a phuong m� con tr? dang tr? t?i s? b? gi?i ph�ng, g�y th?t tho�t d? li?u
	
	cout<<*p<<" "<<&p<<endl;
	cout<<a<<" "<<&a<<endl;
	return 0;
}
