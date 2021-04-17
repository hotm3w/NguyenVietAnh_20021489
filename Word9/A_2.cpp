#include<iostream>
using namespace std;

int main(){
	int a;
	int* p = &a;
	int* p2 = &a;
	*p = 10;
	cout<<*p<<" "<<&p<<endl; 
	cout << *p2<<" "<<&p2<<endl;
	
	delete p;			// p2 tro vo dia chi p, xoa dia chi p, p2 in ra ket qua khac 
	cout<<*p<<" "<<&p<<endl; 
	cout << *p2<<" "<<&p2<<endl;
	
	delete p2;
		cout<<*p<<" "<<&p<<endl; 
	cout << *p2<<" "<<&p2<<endl;
	return 0;
}
