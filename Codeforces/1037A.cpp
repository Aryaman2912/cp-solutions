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
    ll i=0,j=0,n,high=0,ans=0;
    cin >> n;
    high = (sqrt(1 + 8*(log2(n))) - 1)/2;
    while(n!=0){
    	n /= 2;
    	ans++;
    }
    cout << ans << "\n";
}

    
 
int main()
{
    ll t = 1;
    // cin >> t;
    loop(f,0,t){
        solve();
    }   
}
