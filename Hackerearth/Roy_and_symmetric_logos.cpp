#include <iostream>
#include<string>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll r,c,n,flag=0,p=0,q=0,x=0,y=0,i=0,j=0;
    string s;
    cin >> n;
    ll a[n][n]={0};
    for(i=0;i<n;i++){
        cin >> s;
        for(j=0;j<n;j++){
            a[i][j] = s[j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j] == a[i][n-1-j] && a[i][j]==a[n-1-i][j] && a[i][j]==a[n-1-i][n-1-j]){
                continue;
            }
            else{
                flag=1;
                break;
            }
        }
    }
    if(flag){
        cout << "NO" << "\n";
    }
    else{
        cout << "YES" << "\n";
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
