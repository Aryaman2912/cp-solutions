#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
#define pi 3.14159265359
// #define MAXN long long 1e6 + 5
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[500005];
 
void solve(){
    ll i=0,j=0,n,high=0,ans=0,s;
    cin >> n;
    string a,b;
    cin >> a >> b;
    loop(i,0,n-1){
    	if(a[i]==b[i])
    		continue;
    	else if(a[i] != b[i] && a[i+1] != b[i+1] && a[i] != a[i+1]){
    		ans += 1;
    		a[i] = b[i];
    		a[i+1] = b[i+1];
    	}
    	else{
    		ans += 1;
    		a[i] = b[i];
    	}
    } 
    if(a[n-1] != b[n-1])
    	ans += 1;
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
