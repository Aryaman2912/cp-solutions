#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
#define pi 3.14159265359
// #define MAXN long long 1e6 + 5
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[500005];
void solve(){
    ll i=0,j,n,k,g,b,ans=0;
    cin >> n >> g >> b;
    ans = (((n+1)/2)/g)*(b+g) + ((n+1)/2)%g;
    if(n == 1){
        cout << n << "\n";
    }
    else{
        if(((n+1)/2)%g == 0)
            ans -= b;
        cout << max(ans,n) << "\n";
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
