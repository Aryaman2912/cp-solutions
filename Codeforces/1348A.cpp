#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;

void solve(){
    ll n,i,j,k,tsum=0,psum=0,flag=0;
    cin >> n;
    tsum = pow(2,n);
    for(i=1;i<n/2;i++){
        tsum += pow(2,i);
    }
    for(i=n/2;i<n;i++){
        tsum -= pow(2,i);
    }
    cout << tsum << "\n";

}

int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
}