#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
// #define MAXN long long 1e6 + 5
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[10005];
vector <ll> deg(10005);
 
void solve(){
    ll i=0,j=0,a,b,c,x,y,z;    
    cin >> a >> b >> c;
    x = (a+b-c)/2;
    y = (b+c-a)/2;
    z = (a+c-b)/2;    
    if(x+y==b && y+z==c && x+z==a){
        cout << x << " " << y << " " << z << "\n";
    }
    else{
        cout << "Impossible" << "\n";
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
					
