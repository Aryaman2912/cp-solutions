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
    ll n,i,j,k,num=0,prod=1,temp,x,y,sum1=0,sum2=0;
    cin >> n;
    vector <ll> mid;
    // First half-player1, second half-player2,middle elements-sort and then distribute alternatively,
    for(i=0;i<n;i++){
        cin >> x;
        vector <ll> b(x);
        for(j=0;j<x;j++){
            cin >> b[j];
            if(x%2==1 && j == x/2){
                mid.push_back(b[j]);
            }
        }
        if(x%2==0){
            for(j=0;j<x/2;j++){
                sum1 += b[j];
            }
            for(j=x/2;j<x;j++){
                sum2 += b[j];
            }
        }
        else{
            for(j=0;j<x/2;j++){
                sum1 += b[j];
            }
            for(j=x/2+1;j<x;j++){
                sum2 += b[j];
            }
        }
    }
    if(mid.size()){
        sort(mid.begin(),mid.end());
            reverse(mid.begin(),mid.end());
            for(j=0;j<mid.size();j++){
                if(j%2){
                    sum2 += mid[j];
                }
                else{
                    sum1 += mid[j];
                }
            }
    }
    cout << sum1 << " " << sum2;

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