#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long ll;

ll factorial(ll n){
    ll prod = 1;
    for(ll i=1;i<=n;i++){
        prod *= i;
    }
    return prod;
}
ll combinations(ll a,ll b){
    ll nCr;
    if(a<b){
        return 0;
    }
    else{
        nCr  = factorial(a)/(factorial(a-b)*factorial(b));
        return nCr;
    }
}

void solve(){
    ll n,k,i,j,temp,ans=0,x=-1,y=-1,top;
    cin >> n;
    vector <ll> a(n+100),forward_it(n+100),backward_it(n+100);
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    stack <ll> s;
    s.push(1);
    for(i=2;i<=n;i++){
        while(s.size() and a[s.top()] < a[i]){
            forward_it[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(s.size()){
        forward_it[s.top()] = -1;
        s.pop();
    }
    s.push(n);
    for(i=n-1;i>=1;i--){
        while(s.size() and a[s.top()] < a[i]){
            backward_it[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(s.size()){
        backward_it[s.top()] = -1;
        s.pop();
    }
    for(i=1;i<=n;i++){
        cout << forward_it[i] + backward_it[i] << " ";
    }

}

int main()
{
    ll t = 1;
    // cin >> t;
    // cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
}