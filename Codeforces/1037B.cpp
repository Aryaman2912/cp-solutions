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
    cin >> n >> s;
    vector <ll> a(n);
    loop(i,0,n){
    	cin >> a[i];
    }
    sort(a.begin(),a.end());
    ans += ll(abs(long((a[n/2] - s))));
    if(a[n/2] != s){
	    if(s<=a[n/2-1]){
	    	loop(i,0,n/2){
	    		ans += max(high,(a[i] - s));
	    	}
	    }
	    else if(s>=a[n/2+1]){
	    	loop(i,n/2+1,n){
	    		// cout << s << " ";
	    		// cout << s-a[i] << " ";
	    		// cout << a[i] << "\n";
	    		ans += max(high,s-a[i]);
	    	}
	    }
	}
	else{
		ans = 0;
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
