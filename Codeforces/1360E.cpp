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
    ll i=0,j,b,n,k,flag=0;
    cin >> n;
    char a[n][n];
    loop(i,0,n){
        string s;
        cin >> s;
        b=0;
        loop(j,0,n){
            a[i][j] = (s[j]);
        }
    }
    loop(i,0,n){
        loop(j,0,n){
            if(a[i][j]=='1'){
                // cout << i << " " << j << "\n";
                if(i==n-1 || j==n-1){
                    continue;
                }
                else{
                    if(a[i+1][j] != '1' && a[i][j+1] != '1'){
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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
