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
    ll n,k,i,j,temp,ans=0;
    cin >> n >> k;
    vector <ll> a(n),prefix(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    prefix[0] = a[0];
    for(i=1;i<n;i++){
        prefix[i] = prefix[i-1] + a[i];
    }
    //Visualise a cyclic array and we are choosing k elements in order starting from indices 0,-1,-2 so on
    for(i=0;i<k;i++){
        temp = prefix[i] + prefix[n-1] - prefix[n-k+i];
        ans = max(ans,temp);
    }
    cout << ans << "\n";
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