#include<iostream>
using namespace std;

struct Point{
	double x,y;
};

void getInfor(Point &a){
	cout<<"Nhap toado x/y: ";
	cin>>a.x>>a.y;
}

void Display(Point a){
	cout<<" x: "<<a.x<<" y: "<<a.y;
}

Point mid_point(Point s1, Point s2){
	Point res;
	res.x=(s1.x+s2.x)/2;
	res.y=(s1.y+s2.y)/2;
	return res;
}

int main(){
	Point s1,s2,s_mid_point;
	getInfor(s1);
	getInfor(s2);
	s_mid_point=mid_point(s1,s2);
	cout<<"Toa do trung diem cua s1,s2: "<<endl;
	Display(s_mid_point);
	
	
}
