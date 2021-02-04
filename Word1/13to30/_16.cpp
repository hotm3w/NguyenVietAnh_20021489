#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Nhap vao 3 nguyen: ";
	cin>>a>>b>>c;
	if(a!=b||a!=c||b!=c) cout<<"False";
	else cout<<"True";
}
