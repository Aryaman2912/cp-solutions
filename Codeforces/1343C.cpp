#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for (ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll i=0,j=0,k,n,res=0,temp;
    cin >> n;
    std::vector<ll> a(n);
    loop(i,0,n){
        cin >> a[i];
    }
    temp = a[0];
    loop(i,1,n){
        if(a[i] > 0 and temp<0){
            res += temp;
            temp = a[i];
        }
        else if(a[i] < 0 and temp > 0){
            res += temp;
            temp = a[i];
        }
        else{
            temp = max(temp,a[i]);
        }
    }
    res += temp;
    cout << res << "\n";

}
 
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
