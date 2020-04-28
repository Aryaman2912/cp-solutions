//Codechef PSHOT

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
using namespace std;
typedef long long ll;

void solve(){
    int n,i=0,c1=0,c2=0,j=0,k=0;
    cin >> n;
    string s;
    cin >> s;
    cin.ignore();

    for(k=0;k<2*n;){
        if(s[k]=='1'){
            c1 += 1;
        }
        i += 1;
        k+=1;
        // cout << c1 << "\n";
        if((c1 - c2) > n - j){
            break;
        }
        if((c2 - c1) > n - i){
            break;
        }
        if(s[k]=='1'){
            c2 += 1;
        }
        j += 1;
        k+=1;
        // cout << c2 << "\n";
        if((c2 - c1) > n - i){
            break;
        }
        if((c1 - c2) > n - j){
            break;
        }
    }
    cout << i+j << "\n";
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
