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
    ll i=0,j=0,k,n;
    cin >> n;
    if(n<4)
        cout << -1;
    else if(n%2==1){
        for(i=1;i<=n;i+=2){
            cout << i << " ";
        }
        cout << n-3 << " " << n-1 << " ";
        for(i=n-5;i>=2;i-=2){
            cout << i << " ";
        }
    }
    else if(n%2==0){
        for(i=2;i<=n;i+=2){
            cout << i << " ";
        }
        cout << n-3 << " " << n-1 << " ";
        for(i=n-5;i>=1;i-=2){
            cout << i << " ";
        }    
    }
    cout << "\n";
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
