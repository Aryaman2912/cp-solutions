//Codeforces 1311B

#include <iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll r,c,n,m,flag=0,q=0,x=0,y=0,i=0,j=0,sum=0;
    cin >> n >> m;
    vector <ll> a(n),p(m),temp;
    for(i=0;i<n;i++){
        cin >> a[i];
        temp.push_back(a[i]);
    }
    for(i=0;i<m;i++){
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    sort(temp.begin(),temp.end());
    //Compare adjacent elements. If not in required order, check if the desired index is present in p. If yes, swap the elements in a. Else, break.
    while(1){
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1] && binary_search(p.begin(),p.end(),i+1)){
                swap(a[i],a[i+1]);
            }
            else if(a[i]>a[i+1] && !(binary_search(p.begin(),p.end(),i+1))){
                flag=2;
                break;
            }
        }

        if(a == temp){
            flag=1;
            break;
        }
        else if(flag == 2){
            break;
        }
    }
    if(flag==1){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
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
