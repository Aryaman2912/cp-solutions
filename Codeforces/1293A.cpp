#include <iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,s,k,i,j,ans1=1000,ans2=1000;
    cin >> n >> s >> k;
    vector <ll> closed(k);
    for(i=0;i<k;i++){
        cin >> closed[i];
    }
    sort(closed.begin(),closed.end());
    for(i=s;i<=n;i++){
        if(!binary_search(closed.begin(),closed.end(),i)){
            ans1 = i-s;
            break;
        }
    }
    for(i=s;i>0;i--){
        if(!binary_search(closed.begin(),closed.end(),i)){
            ans2 = s-i;
            break;
        }
    }
    cout << min(ans1,ans2) << "\n";
 
 
}
 
int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
 
}