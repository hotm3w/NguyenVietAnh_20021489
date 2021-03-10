#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	cout<<"Nhap mang:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=0,min=999999,sumc=0,count=0;
	for(int i=0;i<n;i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
		if(a[i]%2==0) sumc+=a[i];
		if(a[i]%2!=0) ++count;
	}
	cout<<"Min= "<<min<<endl;
	cout<<"Max= "<<max<<endl;
	cout<<"Tong ptu chan= "<<sumc<<endl;
	cout<<"So ptu le= "<<count;
}
