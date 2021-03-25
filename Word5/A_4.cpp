  
#include <iostream>
using namespace std;
void ar(int x[])
{
    for (int i = 0; i < 5; i++) cout << &x[i] << " ";
    cout << endl;
}
void str(string s)
{
    cout << &s << endl;
}
int main()
{
    int a[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) cout << &a[i] << " ";
    cout << endl;
    string s;
    ar(a);
    cout << &s << endl;
    str(s);
    return 0;
}
