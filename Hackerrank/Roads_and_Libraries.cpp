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
    ll n,i,j,k,m,clib,croad,mincost = M;
    cin >> n >> m >> clib >> croad;
    ll a[m][2];
    for(i=0;i<m;i++){
        for(j=0;j<2;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<=m;i++){
        mincost = min(mincost,croad*i + clib*((n-i)>=1?n-i:1));
    }
    cout << mincost << "\n";
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
