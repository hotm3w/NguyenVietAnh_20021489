#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=-(n-1);i<1;i++){
		for(int j=-(n-1);j<=(n-1);j++){
			if(abs(i)>=abs(j)) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
} 
