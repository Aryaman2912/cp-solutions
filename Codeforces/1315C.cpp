//Codeforces 1315C

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll r,c,n,flag=0,p=0,q=0,x=0,y=0,i=0,j=0,sum=0;
    cin >> n;
    vector <ll> res;
    ll a[2*n]={0},b[n] = {0};
    for(i=0;i<n;i++){
        cin >> b[i];
        a[b[i]-1] = 1;
    }
    //Every number from 1 to 2n has a flag variable.If used, it is set to 1. For each element in b,we check if there exists a number in 1 to 2n which
    //is greater than b and has flag = 0. If not, there is no solution. If yes, append the element of b and corresonding number in 1 to 2n to a vector and 
    //print the vector in the end.
    for(i=0;i<n;i++){
            flag=0;
        for(j=0;j<2*n;j++){
            if(j+1 > b[i] && a[j]==0){
                a[j] = 1;
                res.push_back(b[i]);
                res.push_back(j+1);
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(res.size() != 2*n || flag==0){
        cout << -1 << "\n";
    }
    else{

        for(i=0;i<2*n;i++){
            cout << res[i] << " ";
        }
    }
    cout << "\n";
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
