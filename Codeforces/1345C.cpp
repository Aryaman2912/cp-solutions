#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for (ll i = a; i < b; ++i)
#define rloop(i,a,b) for(ll i = a; i >= b; --i)

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll n,i,j,k,m,count=0,temp;
    cin >> n;
    vector<ll> a(n);
    set <ll> room;
    loop(i,0,n){
        cin >> a[i];
    }
    temp = n;
    loop(k,1,2*n){
        room.insert(k+(a[k%n]+n)%n);
    }

    if(room.size()==2*n-1){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
    
    
}
 
int main()
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
