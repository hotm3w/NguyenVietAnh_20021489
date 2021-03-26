#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c,k;
    cout<<"Nhap kich thuoc ma tran: ";
    cin>>a>>b;
	cout<<"Nhap so luong boom: ";
	cin>>c;
    int m[a+2][b+2];
	char n[a+2][b+2];
    for(int i=0;i<a+2;i++){
        for(int j=0;j<b+2;j++){
            m[i][j]=-1;
            n[i][j]='*';
        }
    }
    k=c;
    srand(time(NULL));
    while(k>0){
        int o = rand()%a+1;
        int p = rand()%b+1;
        if(m[o][p]==-1)	{
		m[o][p] = -2;
        --k;
		}
    }
    for(int i=1;i<a+1;i++){
        for(int j=1;j<b+1;j++){
        	cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
	int t = a*b-c;
	int x,y; 
    while(t>0){
    	int z=0;
    	cout<<endl<<"(x,y): ";
    	cin>>x>>y;
		--t;
    	if(m[x][y]==-1){
    		for(int i=-1;i<=1;i++){
    			for(int j=-1;j<=1;j++){
    				if(m[x+i][j+y]==-2){
						++z;
					} 
				}
			}
			m[x][y]=z;
		
				for(int i=1;i<a+1;i++){
        			for(int j=1;j<b+1;j++){
						if(m[i][j]==-1||m[i][j]==-2)
						cout<<"*"<<" ";
						else cout<<m[i][j]<<" ";
        		}
        		cout<<endl;
    		}
		}
		else {
		cout<< "YOU DEAD";
		break;
		}
		if(t==0) cout<< "YOU WIN";
	}
	cout<<"\n\nMA TRAN:"<<endl;
    for(int i=1;i<a+1;i++){
        for(int j=1;j<b+1;j++){
           m[i][j]==-1 ? cout<<"-"<<" " : cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
