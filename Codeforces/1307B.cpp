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
    ll n,x,i,j,temp,ans=0,y=1;
    cin >> n >> x;
    temp=x;
    vector <ll> a(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    if(binary_search(a.begin(),a.end(),x)){
        cout << 1 << "\n";
    }
    else if(*max_element(a.begin(),a.end()) > x){
        cout << 2 << "\n";
    }
    else{
        cout << temp/a[a.size()-1] + min(y,temp%a[a.size()-1]) << "\n";
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