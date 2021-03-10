#include<stdio.h>
#include <iostream>
using namespace std;
 
int check(int i){
    int r,sum=0,temp;
 
 
    for(temp=i;i!=0;i=i/10){
         r=i%10;
         sum=sum*10+r;
    }
    if(temp==sum)
         return 1;
    else 
    	return 0;
}

int main(){
	int dem=0,a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(check(i)==1){
			++dem;
		}
	}
	cout<<"\n\n"<<dem; 
} 
