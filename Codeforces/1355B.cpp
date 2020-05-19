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
    ll i=0,j=0,n,k,ans=0,high=0,count=0,temp,low=M,rem=0;
    cin >> n;
    vector<ll> a(n);
    loop(i,0,n){
        cin >> a[i];
    }
    temp = n;
    sort(a.begin(),a.end());
    loop(i,1,a[n-1]+1){
        count=0;
        loop(j,0,n){
            if(a[j]==i){
                count++;
            }
        }
        ans += (count+rem)/i;
        rem = (count+rem)%i;
    }
    cout << ans << "\n";
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
					
