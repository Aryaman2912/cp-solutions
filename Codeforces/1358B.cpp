#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
#define pi 3.14159265359
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

void solve(){
    ll i=0,j,n,ans=0;
    cin >> n;
    vector <ll> a(n);
    loop(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    rloop(i,n-1,0){
        // cout << a[i] << " " << i+1 << "\n";
        if(a[i] <= i+1){
            ans = i+1;
            break;
        }
    }
    cout << ans+1 << "\n";        
}
 
int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){
        solve();
    }   
}
