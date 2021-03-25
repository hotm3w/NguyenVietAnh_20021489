#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1) return 1;
    else
    {
        cout << n << "! = " << n * f(n - 1) << " at " << &n << endl;
        return n * f(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    f(n);
    return 0;
}
