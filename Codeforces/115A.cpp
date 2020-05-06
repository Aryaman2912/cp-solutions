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
bool visited[10005];
vector <ll> edges[10005];

void solve(){
    ll n,x,i,j,temp,ans=0,y=1,m,maxnode=0;
    cin >> n;
    vector <ll> a(n+1);
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    for(i=1;i<=n;i++){
        temp = a[i];
        m = 0;
        while(temp != -1){
            temp = a[temp];
            m++;
        }
        maxnode = max(maxnode,m);
    }
    cout << maxnode + 1 << "\n";
}

int main()
{
    ll t = 1;
    //cin >> t;
    //cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
}