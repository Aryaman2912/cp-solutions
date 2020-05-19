#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
// #define MAXN long long 1e6 + 5
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[500005];
 
void solve(){
    ll i=0,j=0,n,pos=0,neg=0,ans=0,posind,negind;
    cin >> n;
    vector<ll> a(n),b(n),diff(n);
    ans = (n*(n-1))/2;
    loop(i,0,n){
        cin >> a[i];
    }
    loop(i,0,n){
        cin >> b[i];
        diff[i] = a[i] - b[i];
        if(diff[i]>0)
            pos+=1;
        else
            neg+=1;
    }
    ans -= (neg*(neg-1))/2;
    sort(diff.begin(),diff.end());
    negind = neg-1;
    posind = neg;
    // cout << neg << "\n";
    loop(i,posind,n){
        rloop(j,negind,0){
            // cout << negind << " " << diff[negind] << " ";
            if(diff[i]+diff[j]<=0){
                // cout << j << " ";
                ans -= j+1;
                negind = j;
                break;
            }
        }
    }
    cout << ans << "\n";
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
