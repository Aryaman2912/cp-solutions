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
 
void solve(){
    ll n,i=0,j=0,k,m,ans=0;
    cin >> n >> k;
    if(k<n){
        ans = k;
    }
    else if((k%(n-1))==0){
        ans += k + (k/(n-1) - 1);
    }
    else if((k%(n-1)) != 0){
        ans += k + (k/(n-1));
    }
    cout << ans << "\n";
}
 
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
