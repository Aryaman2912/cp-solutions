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

void solve(){
    ll n,i,j,k=0,q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll a[26] = {0};
    for(j=0;j<s.length();j++){
        a[int(s[j])-97] += 1;
    }
    for(i=0;i<q;i++){
        ll c,waiting=0;
        cin >> c;
        for(j=0;j<26;j++){
            waiting += max(k,a[j]-c);
        }
        cout << waiting << "\n";
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