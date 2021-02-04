#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n=10;
	for(int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
			if(i+j<=10)cout<<i+j<<" ";
			else cout<<(i+j)%10<<" ";
		}
		cout<<endl;
	}

} 
