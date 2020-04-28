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
    ll n,m,k,i,j,item,sum=0,temp=0,prod=1,a,b;
    cin >> n >> k;
    cin >> a >> b;
    //Make a and b equal, then check which of the two takes minimum steps
    sum += a*abs(n - k);
    if( b < 2*a){
        sum += b*(abs(min(n,k)));
    }
    else{
        sum += 2*a*(abs(min(n,k)));
    }
    cout << sum << "\n";
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