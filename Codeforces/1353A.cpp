#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
 
void solve(){
    ll i=0,j=0,n,m;
    cin >> n >> m;
    if(n==1){
        cout << 0 << "\n";
    }
    else if(n==2){
        cout << m << "\n";
    }
    else{
        cout << 2*m << "\n";
    }

}
 
int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }   
}
					
