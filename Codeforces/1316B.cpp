#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
#define pi 3.14159265359
// #define MAXN long long 1e6 + 5
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[500005];
 
void solve(){
    ll i=0,j=0,n,high=0,ans=1;
    cin >> n;
    string s,prefs,suffs,mins,temp;
    cin >> s;
    temp = s;
    mins = temp;
    loop(k,2,n+1){
		prefs = s.substr(k-1,n-k+1);
		suffs = s.substr(0,k-1);
		if(k%2==n%2)
			reverse(suffs.begin(),suffs.end());
		temp = prefs+suffs;
		if(temp<mins){
			mins = temp;
			ans = k;
		}      
    }
    cout << mins << "\n";
    cout << ans << "\n";

}

    
 
int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){
        solve();
    }   
}
