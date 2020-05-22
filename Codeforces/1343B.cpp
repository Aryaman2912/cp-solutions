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
    ll i=0,j=0,n,k,l,temp=0,flag=0,m;
    cin >> n;
    if((n/2)%2){
    	cout << "NO" << "\n";
    }
    else{
    	cout << "YES" << "\n";
    	loop(i,1,n/2+1){
    		cout << 2*i << " ";
    		temp += 2*i;
    	}
    	loop(i,1,n/2){
    		cout << 2*i-1 << " ";
    		flag += 2*i-1;
    	}
    	cout << temp - flag << "\n";
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
