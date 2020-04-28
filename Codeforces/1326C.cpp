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
    ll n,m,k,i,j,item,sum=0,temp=0,prod=1;
    cin >> n >> k;
    vector <ll> a(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    //Sum of the smallest n-k terms(1 to n-k) subtracted from the total sum of n terms(1 to n) gives the required sum.
    sum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    for(i=0;i<n;i++){
        if(a[i] >= n-k+1){
            temp = i+1;
            j = i;
            break;
        }
    }
    //Using multiplication rule.
    for(i=j+1;i<n;i++){
        if(a[i] >= n-k+1){
            prod *= (i+1-temp);
            prod %= C;
            temp=i+1;
        }
    }
    cout << sum << " " << prod%C;
 
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