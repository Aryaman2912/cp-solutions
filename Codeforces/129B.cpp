#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
// #define MAXN long long 1e6 + 5
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[10005];
vector <ll> deg(10005);
 
void solve(){
    ll i=0,j=0,n,m=0,k,temp=-1,flag=1,sum=0,l=0,r=0;
    cin >> n >> m;
    vector<ll> a[n+5],deg(n+5),sing;
    loop(i,1,m+1){
        cin >> l >> r;
        a[l].pb(r);
        a[r].pb(l);
        deg[l]++;
        deg[r]++;
    }
    while(flag){
        flag=0;
        loop(i,1,n+1){
            if(a[i].size()==1){ 
                flag=1;
                sing.pb(i);
            }
        }
        for(auto i :sing){
            auto x = find(a[a[i][0]].begin(),a[a[i][0]].end(),i);
            if(x != a[a[i][0]].end())
            {
                a[a[i][0]].erase(x);
                a[i].pop_back();
            }
        }
        if(flag==1){
            sum++;
        }
    }
    cout << sum << "\n";
}
 
int main()
{
    ll t = 1;
    // cin >> t;
    // cin.ignore();
    loop(f,0,t){
        solve();
    }   
}
