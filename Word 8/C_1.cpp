#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(char a[]){
	for(int i=0;i<strlen(a)/2;i++){
		char t=a[i];
		a[i]=a[strlen(a)-1-i];
		a[strlen(a)-1-i]=t;
	}
}

void delete_char(char a[], char c){
	int t=strlen(a);
	for(int i=0;i<t;i++){
		if(a[i]==c){
			--t;
			for(int j=i;j<t;j++){
				a[j]=a[j+1];
			}
			a[t]='\0';
		}
	}
}

void pad_right(char a[], int n){
	if(n>strlen(a)){
		for(int i=strlen(a);i<n;i++){
			a[i]=' ';
		}
		a[n]='\0';
	}
}

void pad_left(char a[], int n){
	if(n>strlen(a)){
		int t=strlen(a);
		for(int i=n-1;i>n-t;i--){
			a[i]=a[i-(n-t)];
		}
		for(int i=0;i<n-t;i++){
			a[i]=' ';
		}
		a[n]='\0';
	}
}

void truncate(char a[], int n){
	a[n]='\0';
}

bool is_palindrome(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(a[i]!=a[strlen(a)-1-i]){
			return false;
		}
	}
	return true;
}

void trim_left(char a[]){
//	int t=strlen(a);
	while(a[0]==' '){
		for(int i=0;i<strlen(a);i++){
			a[i]=a[i+1];
		}
		a[strlen(a)]='\0';
	}
} 

void trim_right(char a[]){
	int k=strlen(a)-1;
	while(a[k]==' '){
		a[k]='\0';
		k--;
	}
}

int main(){
	char a[100]="abcdck";
	cout<<"a: "<<endl;
	reverse(a);
	cout<<a<<endl;
	
	cout<<"b: "<<endl;
	delete_char(a,'c');
	cout<<a<<" "<<strlen(a)<<endl;
	
	cout<<"c: "<<endl;
	pad_right(a,9);
	cout<<a<<" "<<strlen(a)<<endl;
	
	cout<<"d: "<<endl;
	pad_left(a,11);
	cout<<a<<" "<<strlen(a)<<endl;
	
	cout<<"e: "<<endl;
	truncate(a,9);
	cout<<a<<" "<<strlen(a)<<endl;
	
	cout<<"f 0 or 1: "<<is_palindrome(a)<<endl;
	
	cout<<"g: "<<endl;
	trim_left(a);
	cout<<a<<" "<<strlen(a)<<endl;
	
	
	cout<<"h:"<<endl;
	trim_right(a);
	cout<<a<<" "<<strlen(a)<<endl;
	
}
