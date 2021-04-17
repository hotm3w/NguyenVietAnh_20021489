#include<iostream>
using namespace std;
int main(){
	char* a = new char[10];
	char* c = a + 3 ;
	cout<< sizeof(c)<<endl;
	for (int i = 0; i < 9; i++) a[i] = 'a'; 
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl; // cerr nay loi, do delete bo nho dong a ma con tro mang c dag tro vo
}
