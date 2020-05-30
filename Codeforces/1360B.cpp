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

void solve(){
    ll i=0,j,b,n,mindiff=M;
    cin >> n;
    vector <ll> a(n);
    loop(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    loop(i,1,n){
        mindiff = min(mindiff,a[i]-a[i-1]);
    }
    cout << mindiff << "\n";
}

    
 
int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){
        solve();
    }   
}
