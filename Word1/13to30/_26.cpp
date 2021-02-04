#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap N so nguyen: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"So nguyen "<<i+1<<": ";
		cin>>a[i];
	}
	int max=a[0],min=a[0];
	double b;
	for(int i=0;i<n;i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
		b+=a[i];
	}
	b/=5;
	cout<<"Mean: "<<b<<endl;
	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
	
}
