#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,i,j,flag=0,k=0,r=0,u=0,ans=0;
    cin >> n;
    set<ll> a;
    for (i = 0; i < n; i++) {
        cin >> k;
        a.insert(k);
    }
    while (!a.empty()) {
        int m = *a.rbegin();
        a.erase(m);
        if (m % 2 == 0) {
            ans++;
            a.insert(m / 2);
        }
    }
    cout << ans << endl;
}
 
int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
 
}