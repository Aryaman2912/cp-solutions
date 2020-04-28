#include <iostream>
#include<string>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll r,c,n,flag=0,p=0,q=0,x=0,y=0,i=0,j=0,sum=0;
    cin >> r >> c;
    ll a[r][c]={0};
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    cin >> q;
    for(i=0;i<q;i++){
        cin >> n >> x >> y;
        sum=0;
	//BRUTE FORCE
        if(n==1 && y%2==1){
            if(x+1<r)
                sum += a[x+1][y];          
            if(x-1>=0)
                sum += a[x-1][y];          
            if(y+1<c)
                sum += a[x][y+1];          
            if(y-1>=0)
                sum += a[x][y-1];           
            if(x+1<r && y-1>=0)
                sum += a[x+1][y-1];          
            if(x+1<r && y+1<c)
                sum += a[x+1][y+1];
            
        }
        else if(n==1 && y%2==0){
            if(x-1>=0)
                sum += a[x-1][y];
            if(x-1>=0 && y-1>=0)
                sum += a[x-1][y-1];
            if(y-1>=0)
                sum += a[x][y-1];
            if(x+1<r)
                sum += a[x+1][y];
            if(y+1<c)
                sum += a[x][y+1];
            if(x-1>=0 && y+1<c)
                sum += a[x-1][y+1];
        }
        else if(n==2 && y%2==0){
            if(x-2>=0)
                sum += a[x-2][y];
            if(x-2>=0 && y-1>=0)
                sum += a[x-2][y-1];
            if(x-1>=0 && y-2>=0)
                sum += a[x-1][y-2];
            if(y-2>=0)
                sum += a[x][y-2];
            if(x+1<r && y-2>=0)
                sum += a[x+1][y-2];
            if(x+1<r && y+1<c)
                sum += a[x+1][y+1];
            if(x+1<r && y+2<c)
                sum += a[x+1][y+2];
            if(y+2<c)
                sum += a[x][y+2];
            if(x-1>=0 && y+2<c)
                sum += a[x-1][y+2];
            if(x+1<r && y-1>=0)
                sum += a[x+1][y-1];
            if(x+2<r)
                sum += a[x+2][y];
            if(x-2>=0 && y+1<c)
                sum += a[x-2][y+1];
        }
        else if(n==2 && y%2==1){
            if(x-2>=0)
                sum += a[x-2][y];
            if(x-1>=0 && y-1>=0)
                sum += a[x-1][y-1];         
            if(x-1>=0 && y-2>=0)
                sum += a[x-1][y-2];         
            if(y-2>=0)
                sum += a[x][y-2];         
            if(x+1<r && y-2>=0)
                sum += a[x+1][y-2];          
            if(x+2<r && y-1>=0)
                sum += a[x+2][y-1];          
            if(x+2<r)
                sum += a[x+2][y];          
            if(x+2<r && y+1<c)
                sum += a[x+2][y+1];          
            if(x+1<r && y+2<c)
                sum += a[x+1][y+2];           
            if(y+2<c)
                sum += a[x][y+2];            
            if(x-1>=0 && y+2<c)
                sum += a[x-1][y+2];            
            if(x-1>=0 && y+1<c)
                sum += a[x-1][y+1];
        }
        cout << sum << "\n";
    }
}

int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
}