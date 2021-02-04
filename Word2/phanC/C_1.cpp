#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
	int n,k=0;
	cout<<"Nhap so tu nhien n: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%i==0) k++;
	}
	if(k==2) cout<<"yes";
	else cout<<"no";
}
