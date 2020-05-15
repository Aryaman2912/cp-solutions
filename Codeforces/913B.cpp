#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for (ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void dfs(ll m){
    visited[m] = true;
    for(vector<ll>::iterator i = edges[m].begin();i != edges[m].end();i++){
        if(!visited[*i]){
            dfs(*i);
            nodes[m]++;
        }
    }
}
 
void solve(){
    ll n,i,j,k,tsum=0,psum=0,flag=0,x,flag2=0;
    cin >> n;
    std::vector<ll> v(n+5),a[1100],c(n+5),deg(n);
    loop(i,1,n){
        cin >> v[i];
        v[i]--;
        deg[v[i]]++;
    }
    loop(i,0,n){
        if(deg[i]==0){
            c[v[i]]++;
        }
    }
    loop(i,0,n){
        if(deg[i] > 0 && c[i] < 3){
            cout << "No" << "\n";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout << "Yes" << "\n";
    }
}
 
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    ll t = 1;
    // cin >> t;
    // cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
