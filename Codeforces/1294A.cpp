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
    ll i=0,j,a,b,c,n,max,min,mid;
    cin >> a>>b>>c>>n;
    if(a>=b && a>=c){
        max=a;
        if(b>=c){
            mid=b;
            min=c;
        }
        else{
            mid=c;
            min=b;
        }
    }
    if(b>=a && b>=c){
        max=b;
        if(a>=c){
            mid=a;
            min=c;
        }
        else{
            mid=c;
            min=a;
        }
    }
    if(c>=b && c>=a){
        max=c;
        if(b>=a){
            mid=b;
            min=a;
        }
        else{
            mid=a;
            min=b;
        }
    }
    if(n < 2*max-mid-min)
        cout << "NO" << "\n";
    else{
        if((n - (2*max-mid-min))%3==0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" <<"\n";
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
