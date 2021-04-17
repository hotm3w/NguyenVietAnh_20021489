#include<iostream>
using namespace std;

struct Point{
	int x,y;
};

void getInfor(Point &s){
	cout<<"Nhap x/y: ";
	cin>>s.x>>s.y;
}

void display(Point s){
	cout<<"Thong tim: "<<endl;
	cout<<"x= "<<s.x<<", y= "<<s.y;
}

int main(){
	Point s;
	getInfor(s);
	display(s);
}
