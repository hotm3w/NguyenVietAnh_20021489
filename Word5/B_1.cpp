#include <iostream>
#include <iomanip>
using namespace std;
bool bool3(bool a, bool b, bool c)
{
    return (a + b + c >= 2);
}
int main()
{
    bool a, b, c;
    cout << boolalpha;
    a = true;
    b = true;
    c = false;
    cout << bool3(a, b, c) << endl;
    a = false;
    b = true;
    c = false;
    cout << bool3(a, b, c) << endl;
    a = false;
    b = false;
    c = false;
    cout << bool3(a, b, c) << endl;
    a = true;
    b = true;
    c = true;
    cout << bool3(a, b, c) << endl;
    return 0;
}
