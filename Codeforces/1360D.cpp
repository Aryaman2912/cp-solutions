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
    ll i=0,j,b,n,k,ans=M;
    cin >> n >>k;
    if(n<=k){
        cout << 1 << "\n";
    }
    else{
        b = min(ll(ceil(sqrt(n))+1),k+1);
        loop(i,2,b){
            if(n%i==0){
                if(n/i <= k){
                    ans = i;
                    break;
                }
                else{
                    ans = min(ans,n/i);
                }
            }
        }
        if(ans==M)
            ans = n;
        cout << ans << "\n";
    }
}

    
 
int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){
        solve();
    }   
}
