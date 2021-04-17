#include<iostream>
using namespace std;

struct Point{
	int x,y;
};

void addressValue(Point s){
	cout<<&s<<endl;
}

void addressReference(Point &s){
	cout<<&s<<endl;
}

int main(){
	Point s;
	addressValue(s);
	addressReference(s);
	
}
