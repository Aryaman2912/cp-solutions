#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,i,j,a,b,c,d,w1l,w1u,wnl,wnu,k,flag=0,rem;
    cin >> n >> a >> b >> c >> d;
    w1l = a - b;
    w1u = a + b;
    wnl = c - d;
    wnu = c + d;
    for(i=wnl;i<=wnu;i++){
        k = i/n;
        rem = i % n;
        if(k>=w1l && k < w1u){
            cout << "Yes" << "\n";
            flag=1;
            break;
        }
        else{
            if(k == w1u && rem == 0){
                cout << "Yes" << "\n";
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout << "No" << "\n";
    }
 
 
}
 
int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
    return 0;
}