#include<iostream>
using namespace std;

struct Point{
	int x,y;
};

void addressValue(Point s){
	cout<<&s<<endl;
}

void addressReference(Point &s){
	cout<<"address s:"<<&s<<endl;
	cout<<"address x:"<<&(s.x)<<endl;
	cout<<"address y:"<<&(s.y)<<endl;
}

int main(){
	Point s;
//	addressValue(s);
	addressReference(s);
	// dia chi bien s kieu cau truc Point trung voi bien ptu dau tien la x trong s
	// do x,y kieu int -> dia chi cach 4 bytes
}
