//sg
#include<bits/stdc++.h>
#include<string.h>
#define M 1e9 + 7
#define C 998244353
#define pi 3.14159265359
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

ull choose(ull n, ull k) {
    ull r = 1;
    ull d;
    if (k > n) return 0;
    for (d=1; d <= k; d++) {
        r *= n--;
        r /= d;
    }
    return r;
}

void solve(){
    ll i=0,j,x1,y1,x2,y2;
    cin >> x1>>y1>>x2>>y2;
    cout << (x2-x1)*(y2-y1)+1<<"\n";
}

    
 
int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){
        solve();
    }   
}
