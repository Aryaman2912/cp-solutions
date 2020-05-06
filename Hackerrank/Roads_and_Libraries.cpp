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
bool visited[10000005];
vector <ll> edges[10000005];
ll nodes;

void dfs(ll m){
    nodes++;
    visited[m] = true;
    for(vector<ll>::iterator i = edges[m].begin();i != edges[m].end();i++){
        if(!visited[*i]){
            dfs(*i);
        }
    }
}


int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        ll n,x,i,j,temp,ans=0,y=1,m,clib,croad,cost=0;
        cin >> n >> m >> clib >> croad;
        for(i=1;i<=m;i++){
            cin >> x >> y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        for(i=1;i<=n;i++){
            if(!visited[i]){
                nodes=0;
                dfs(i);
                cost += clib;
                if(clib>croad){
                    cost += (nodes-1)*croad;
                }
                else{
                    cost += (nodes-1)*clib;
                }
            }
            
        }
        cout << cost << "\n";
        for(i=0;i<=n;i++){
            edges[i].clear();
            visited[i] = false;
        }
    }
}
