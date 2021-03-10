#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;// 0<n<10
	cin>>n;
	int a[n];
	for( int i=0;i<n;i++){
		cin>>a[i];
	}
	int c1=0,
		c2=0,
		c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) c1++;
		if(a[i]==2) c2++;
		if(a[i]==3) c3++;
		if(a[i]==4) c4++;
		if(a[i]==5) c5++;
		if(a[i]==6) c6++;
		if(a[i]==7) c7++;
		if(a[i]==8) c8++;
		if(a[i]==9) c9++;
	}
	cout<<"ssh 1: "<<c1<<endl;
	cout<<"ssh 2: "<<c2<<endl;
	cout<<"ssh 3: "<<c3<<endl;
	cout<<"ssh 4: "<<c4<<endl;
	cout<<"ssh 5: "<<c5<<endl;
	cout<<"ssh 6: "<<c6<<endl;
	cout<<"ssh 7: "<<c7<<endl;
	cout<<"ssh 8: "<<c8<<endl;
	cout<<"ssh 9: "<<c9<<endl;
	
	
}
