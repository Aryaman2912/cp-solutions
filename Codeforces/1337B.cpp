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
    ll i=0,j=0,x,n,m;
    cin >> x>>n>>m;
    if(x <= 10 && m>= 1)
        cout << "Yes" << "\n";
    else if(x<= 10 && m==0)
        cout << "No" << "\n";
    else{
        while(n>0){
            x = x/2 + 10;
            n--;
            // cout << x << " ";
        }    
        if(10*m >= x){
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
}s
