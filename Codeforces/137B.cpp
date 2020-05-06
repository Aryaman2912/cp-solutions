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
    ll n,i,j,k,num=0,prod=1,temp,x,y;
    cin >> n;
    set <ll> a;
    for(i=0;i<n;i++){
        cin >> x;
        a.insert(x);
    }
    for(auto it = a.begin();it != a.end();++it){
        if(*it <= n && *it >= 1){
            num += 1;
        }
    }
    cout << n - num<< "\n";

}

int main()
{
    ll t = 1;
    //cin >> t;
    //cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
}
