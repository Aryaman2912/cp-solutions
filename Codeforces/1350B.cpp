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
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll i=0,j=0,n,k,temp=0,count=1,ans=0;
    cin >> n;
    vector <ll> a(n+5),dp(n+5);
    loop(i,1,n+1){
        cin >> a[i];
        dp[i] = 1;
    }
    loop(i,1,n+1){
        for (j = 2*i; j <= n;j+=i){
            if(a[i]<a[j]){
                dp[j] = max(dp[j],dp[i]+1);
            }
        }
    }
    loop(i,1,n+1)
        ans = max(ans,dp[i]);
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
