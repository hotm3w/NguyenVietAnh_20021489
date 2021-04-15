#include<bits/stdc++.h>
using namespace std;

void a( )
{ 
 char a[4] = "abc"; 
 for (char *cp = a; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
}


void b()
{ 
 int a[4] = {4,5,6,7}; 
 for (int *cp = a; (*cp) != 7; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 } 
}

void c( )
{ 
 double a[4] = {1.3,5.4,2.5,6.8}; 
 for (double *cp = a; (*cp) != 6.8; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 } 
}

void d( )
{ 
 double a[4] = {1.3,5.4,2.5,6.8}; 
 for (double *cp = a; (*cp) != 6.8; cp+=2) {
 cout << (void*) cp << " : " << (*cp) << endl;
 } 
}

int main(){
	// chay ctrinh a
	a();
	cout<<endl;
	b();
	cout<<endl;
	c();
	// d. chuong trinh dinh vog lap vo han
}
