#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,2, 2, 2, 4 ,2, 3, 5, 5, -1};
	int n=11;
	for(int i=0;i<n-1;i++){

			while(a[i]==a[i+1]){
				for(int k=i;k<n;k++){
					a[k]=a[k+1];
				}
				--n;
			}
		}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
