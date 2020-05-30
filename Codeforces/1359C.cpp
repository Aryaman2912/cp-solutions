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

vector<ll>edges[1000005];
vector<pair<ll,ll>>degree(1000005);
vector<char>type(1000005);

void solve(){
    ll i=0,j=0;
    double h,c,t;
    cin >> h >> c >> t;
    if(t <= (h+c)/2){
        cout << 2 << "\n";
    }
    else{
        double ans = (h-t)/(2*t - (h+c));
        long long k = floor(ans);
        if(abs(((k+1)*h + k*c)/(2*k + 1) - t) <= abs(((k+1)*(h+c) + h)/(2*k + 3) - t)){
            cout << 2*k+1 << "\n";
        }
        else{
            cout << 2*k + 3<< "\n";
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
}
