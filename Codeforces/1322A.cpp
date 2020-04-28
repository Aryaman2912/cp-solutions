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
    ll n,i,time=0,temp=0,res=0,j,flag=0;
    cin >> n;
    string s;
    cin >> s;
    vector <ll> sum;
    if(s.length()%2){
        cout << -1 << '\n';
    }
    else{
        if(s[0]=='(')
            sum.push_back(1);
        else if(s[0] ==')')
            sum.push_back(-1);
        for(i=1;i<s.length();i++){
            if(s[i]=='('){
                temp = sum[i-1] + 1;
                sum.push_back(temp);
            }
            else{
                temp = sum[i-1] - 1;
                sum.push_back(temp);
            }
        }
        if(sum[sum.size()-1] != 0)
            cout << -1 << '\n';
        else{
            for(i=0;i<sum.size();i++){
                if(sum[i] < 0){
                    flag += 1;
                }
                else if(sum[i]==0 && sum[i-1]<0){
                    res += flag+1;
                    flag = 0;
                }
            }
            cout << res << '\n';
        }
    }
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