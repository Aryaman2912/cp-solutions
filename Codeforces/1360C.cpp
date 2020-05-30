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
    ll i=0,j,b,n,mindiff=M,even=0,odd=0,flag=0;
    cin >> n;
    vector <ll> a(n),evenum,oddnum;
    loop(i,0,n){
        cin >> a[i];
        if(a[i]%2==0){
            evenum.pb(a[i]);
            even++;
        }
        else{
            oddnum.pb(a[i]);
            odd++;
        }
    }
    if(even%2==0 && odd%2==0)
        cout << "Yes" << "\n";
    else{
        loop(i,0,evenum.size()){
            loop(j,0,oddnum.size()){
                if(llabs(evenum[i]-oddnum[j])==1){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==1){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
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
