#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
// #define MAXN long long 1e6 + 5
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
 
void solve(){
    ll i=0,j=0,n,s,s1;
    cin >> n >> s;
    vector<ll> a(n);
    s1 = ((n-1)*(n))/2;
    if(n==1){
        if(s == 1)
            cout << "No" << "\n";
        else{
            cout << "Yes" << "\n";
            cout << s << "\n";
            cout << s-1 << "\n";
        }
    }
    else{
        if(s-n+1<= n){
            cout << "No" << "\n";
        }
        else{
            cout << "Yes" << "\n";
            loop(i,1,n){
                cout << 1 << " ";
            }
            cout << s-n+1 << "\n";
            cout << n << "\n";
        }
    }
}
 
int main()
{
    ll t = 1;
    // cin >> t;
    // cin.ignore();
    loop(f,0,t){
        solve();
    }   
}
					
