//1294B

#include <iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll n,i,j,flag=1,k=0,r=0,u=0;
    string ans;
    pair <ll,ll> b;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    for(i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++){
        r = a[i].first - b.first;
        u = a[i].second - b.second;
        if(r < 0 || u < 0){
            cout << "NO" << "\n";
            flag=0;
            break;
        }
        ans += string(r,'R');
        ans += string(u,'U');
        b = a[i];
    }
    if(flag){
        cout << "YES" << "\n" << ans << "\n";
    }

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
