#include<iostream>
using namespace std;

char *concat(const char* s1, const char* s2){
	int n=0;
	while(*(s1+n)!='\0'){
		n++;
	}
	int t=0;
	while(*(s2+t)!='\0'){
		t++;
	}
	char* s=new char;
	for(int i=0;i<n;i++){
		s[i]=s1[i];
	}
	for(int i=0;i<t;i++){
		s[i+n]=s2[i];
	}
	return s;
}

int main(){
	const char* s=new char;
	s=concat("Viet","ANh");
	cout<<s;
	return 0;
}
