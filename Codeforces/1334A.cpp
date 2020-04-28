//Codeforces 1334A
 
#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<math.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,i=0,j=0,k=0,p1=0,c1=0,p=0,c=0,flag=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> p >> c;
        if((p >= p1)&&(c >= c1)&&(p - p1 >= c - c1)){
            p1 = p;
            c1 = c;
            continue;
        }
        else{
            //cout << "NO" << "\n";
            flag += 1;
        }
    }
    if(flag==0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}
 
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i=0;i<t;i++){
        solve();
    }
}