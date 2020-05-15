#include<iostream>
#include<string>
#include<set>
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

void solve(){
    ll n,i,j,k,m,count=0,temp,x=0,y=0,time=0,sum=0,sumrev=0;
    cin >> n;
    vector <ll> a(n);
    set <ll> unique,unique_rev,ans;
    loop(i,0,n){
        cin >> a[i];
    }
    m = *max_element(a.begin(),a.end());
    if(m==n){
        cout << 0 << "\n";
    }
    else{
        loop(i,0,m){
            unique.insert(a[i]);
        }
        sum = accumulate(unique.begin(),unique.end(),x);
        if(unique.size()==m && sum==((m*(m+1))/2)){
            loop(i,m,n){
                unique_rev.insert(a[i]);
            }
        }
        sumrev = accumulate(unique_rev.begin(),unique_rev.end(),x);
        if(unique_rev.size()==n-m && sumrev==((n-m)*(n-m+1))/2){
            count += 1;
            ans.insert(m);
        }
        unique_rev.clear();
        unique.clear();
        loop(i,0,n-m){
            unique.insert(a[i]);
        }
        sum = accumulate(unique.begin(),unique.end(),x);
        if(unique.size()==n-m && sum==((n-m)*(n-m+1))/2){
            loop(i,n-m,n){
                unique_rev.insert(a[i]);
            }
        }
        sumrev = accumulate(unique_rev.begin(),unique_rev.end(),x);
        if(unique_rev.size()==m && sumrev==(m*(m+1))/2){
            count += 1;
            ans.insert(n-m);
        }
        cout << ans.size() << "\n";
        sloop(i,ans){
            cout << *i << " " << n-*i << "\n";
        }
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
