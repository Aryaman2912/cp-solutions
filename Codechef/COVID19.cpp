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
    ll n,i,j,k,num=1,index1,index2,flag1=0,flag2=0;
    cin >> n;
    vector <ll> a(n),index;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=1;i<n;i++){
        if(a[i]-a[i-1] <= 2){
            num += 1;
        }
        else{
            index.push_back(num);
            num = 1;
        }
    }
    index.push_back(num);
    //cout << index.size() << "\n";
    cout << *min_element(index.begin(),index.end()) << " " << *max_element(index.begin(),index.end()) << "\n";
}

int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }