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
    ll n,i,j,k,tsum=0,psum=0,flag=0;
    cin >> n>>k;
    vector <ll> a(n);
    set <ll> distinct;
    set <ll> ::iterator it;
    for(i=0;i<n;i++){
        cin >> a[i];
        distinct.insert(a[i]);
    }
    if(distinct.size() > k){
        cout << -1;
    }
    else{
        if(distinct.size()<k){
            for(i=1;i<=n;i++){
                distinct.insert(i);
                if(distinct.size()==k)
                    break;
            }
        }
        cout << n*k << "\n";
        for(j=0;j<n;j++){
            for(it=distinct.begin();it != distinct.end();it++){
                cout << *it << " ";
            }
        }
    }
    cout << "\n";


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