#include <iostream>
#include<cmath>
using namespace std;
int rev(int a, int b)
{
    if (a == b) return a;
    else
    {
        while (a != b)
        {
            if (a > b) a -= b;
            if (a < b) b -= a;
        }
        return a;
    }
}
int check(int n)
{
    if (n <= 1) return 0;
    else 
     	for(int i = 2; i <= sqrt(n); i++)
      	if (n%i == 0) return 0;
    return 1;  
}
int checku(int n,int m){
	if(m==n && m==1) return 1;
	else return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "UCLN= " << rev(a,b) << endl;
    if (checku(check(a),check(b))== 1) cout << "Yes";
    else cout << "No";
    return 0;
}
