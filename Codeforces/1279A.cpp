#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;

void solve(){
    ll n,m,i,j,k;
    cin >> n >> m >> k;
    if(n+m >= k-1 && n+k >= m-1 && k+m>=n-1){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
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
