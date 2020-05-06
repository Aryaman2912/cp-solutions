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
    ll n,i,j,k,tsum=0,psum=0,flag=0;
    cin >> n>>k;
    string s;
    vector <char> c;
    vector <string> e(k);
    cin >> s;
    for(i=0;i<n;i++){
        c.push_back(s[i]);
    }
    sort(c.begin(),c.end());
    for(i=0;i<k-1;i++){
        if(c[i+1] != c[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout << c[k-1] << "\n";
        flag=0;
    }
    else{
        for(j=0;j<k;j++){
            e[j] += c[j];
        }
        for(i=k;i<n-1;i++){
            if(c[i+1] != c[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(i=k;i<n;i++){
                e[i%k] += c[i];
            }
        }
        else{
            for(i=k;i<n;i++){
                e[0] += c[i];
            }
        }
        sort(e.begin(),e.end());
        cout << e[e.size()-1] << "\n";
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