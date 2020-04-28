#include <iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,s,k,i,j,bottles=0;
    cin >> n;
    vector <ll> a(n),b(n);
    for(i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((a[i] == b[j]) && (i != j)){
                bottles++;
                break;
            }
        }
        //cout << bottles << " ";
    }
    cout << n - bottles << "\n";
 
 
}
 
int main()
{
    ll t = 1;
    /*cin >> t;
    cin.ignore();*/
    for(ll f=0;f<t;f++){
        solve();
    }
 
}