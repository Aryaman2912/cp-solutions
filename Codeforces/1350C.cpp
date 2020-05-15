#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<iterator>
#include<algorithm>
#include<chrono>
#include<time.h>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
using namespace std::chrono;
typedef long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll i=0,j=0,n,k=1,temp=0,count=1,ans=0,div,flag=0,lcm;
    cin >> n;
    vector <ll> a(n+5),suf(n+5),res(n+5);
    loop(i,1,n+1){
        cin >> a[i];
    }
    suf[n] = a[n];
    rloop(i,n-1,1){
        suf[i] = __gcd(a[i],suf[i+1]);
    }
    loop(i,1,n){
        res[i] = (a[i]*suf[i+1])/suf[i];
    }
    ans = res[1];
    loop(i,2,n){
        ans = __gcd(ans,res[i]);
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
					
