#include<bits/stdc++.h>
using namespace std;

void f(int xval)
{
 int x;
 x = xval;
 cout<<&x;
 // 0x6ffdec
}
void g(int yval){
 int y;
 cout<<&y;
 // 0x6ffdec
}
int main()
{
 f(7);
 g(11);
 return 0;
} 
// 2 ham f(), g() deu tren ham main(), cung kieu tham so int, cung kieu tra ve, x & y deu la bien dia phuong
// kha nang cao la x, y cung dia chi
