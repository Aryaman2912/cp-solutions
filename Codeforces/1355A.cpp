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

vector <ll> a[500005];
 
void solve(){
    ll i=0,j=0,n,k,ans=0,high=0,count=0,temp,low=M;
    cin >> n >> k;
    loop(i,1,k){
        temp = n;
        high=0;
        low=M;
        while(temp>0){
            low = min(temp%10,low);
            high = max(temp%10,high);
            temp /= 10;
        }
        n += low*high;
        if(low == 0){
            break;
        }
    }
    cout << n << "\n";
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
					
