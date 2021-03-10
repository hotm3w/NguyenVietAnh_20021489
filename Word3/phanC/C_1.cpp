# include <iostream>
using namespace std;
int main()
{
    int n;
    do{
    	cin>>n;
    	if(n<=0||n>1000) 
    	cin>>n;
	}while(n<=0||n>1000); 
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++){
            if(a[i] == a[j])
            {
                cout << "Yes";
                exit(0);
            }
	 	} 
	cout<<"No";
}
