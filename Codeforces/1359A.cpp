#include<bits/stdc++.h>
using namespace std;
#define M 1e9 + 7
#define C 998244353
#define pi 3.14159265359
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;

void solve(){
    ll i=0,n,m,k;
    cin >>n>>m>>k;
    if(n/k >= m){
        cout << m << "\n";
    }
    else if(m==0){
        cout << 0 << "\n";
    }
    else if(n/k==1){
        cout << 0 << "\n";
    }
    else{
        cout << n/k - (ceil((float)(m-n/k)/(k-1) )) << "\n";
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
