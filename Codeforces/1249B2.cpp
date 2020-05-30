#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
#define pi 3.14159265359
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

// vector <ll> edges[500005],nodes(500005);
// vector<bool> visited(500005);
// void dfs(ll m){
//     nodes[m]++;
//     visited[m] = true;
//     for (std::vector<ll>::iterator i = edges[m].begin(); i != edges[m].end(); ++i){
//         if(!visited[*i]){
//             dfs(*i);
//         }

//     }
// }
void solve(){
    ll i=0,j,n,k,g,b,ans=0;
    cin >> n;
    vector <ll> res(n+1),a(n+1);
    vector <bool>used(n+1);
    loop(i,1,n+1){
        cin >> a[i];
        // edges[i].pb(k);
        // edges[k].pb(i);
    }
    loop(i,1,n+1){
        j=i;
        ans=0;
        if(!used[j]){
            set<ll> cycle;
            cycle.insert(j);
            while(!used[j]){
                used[j]=true;
                cycle.insert(a[j]);
                j = a[j];
                ans++;
            }
            sloop(k,cycle){
                res[*k] = cycle.size();
            }
        }
    }
    loop(i,1,n+1){
        cout << res[i] << " ";
    }
    cout << "\n";
}

    
 
int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){
        solve();
    }   
}
