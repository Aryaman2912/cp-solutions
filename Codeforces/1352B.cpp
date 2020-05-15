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

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll n,i=0,j=0,k,m;
    cin >> n >> k;
    if((n%2!=0 && k%2==0) || (k>n)){
        cout << "NO" << "\n";
    }
    else if(n%k ==0){
        cout << "YES" << "\n";
        loop(i,0,k){
            cout << n/k << " "; 
        }
        cout << "\n";
    }
    else if(n%2==0 && k <= n/2)
    {
        cout << "YES" << "\n";
        loop(i,0,k-1){
            cout << 2 << " ";
        }
        cout << n - 2*(k-1) << "\n";
    }
    else if(n%2==0 && k>n/2){
        if(k%2!=0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
            loop(i,0,k-1){
                cout << 1 << " ";
            }
            cout << n - (k-1) << "\n";
        }
    }
    else if(n%2==1){
        loop(i,0,k-1){
            cout << 1 << " ";
        }
        cout << n - (k-1) << "\n";
    }
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
