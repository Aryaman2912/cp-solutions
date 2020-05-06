#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
bool visited[10005];
vector <ll> edges[10005];
ll count1=0;

void dfs(ll m){
    visited[m] = true;
    for(vector<ll>::iterator it = edges[m].begin();it != edges[m].end();it++){
        if(!visited[*it]){
            dfs(*it);
        }
    }
}

void solve(){
    ll n,i,j,temp,ans=0,m,maxnode=0;
    cin >> n;
    ll a[n][n],x[n],y[n];
    for(i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(x[i]==x[j] || y[i]==y[j]){
                edges[i].push_back(j);
                edges[j].push_back(i);
            }
        }
    }
    for(i=0;i<n;i++){
        if(!visited[i]){
            dfs(i);
            count1++;
        }
    }
    cout << count1 - 1 << "\n";

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