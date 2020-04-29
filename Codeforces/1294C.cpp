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
    temp=n;
    set <ll> a;
    vector <ll> b;
    set<ll>::iterator it;
    for(j=2;j<=sqrt(n)+1;j++){
        if(!(n%j)){
            n/=j;
            a.insert(j);
            if(a.size()==2){
                break;
            }
        }
    }
    if(a.size() != 0){
        for(it=a.begin();it!=a.end();++it){
            prod *= *it;
            b.push_back(*it);
        }
    }
    if(a.size()<2 || (temp/prod) == b[0] || (temp/prod) == b[1]){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << "\n";
        for(it=a.begin();it!=a.end();++it){
            cout << *it << " ";
 
        }
        cout << temp/prod << "\n";
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