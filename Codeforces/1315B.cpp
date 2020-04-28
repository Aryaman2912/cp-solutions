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
    ll a,b,p,i,time=0,temp=0,res=0,j,flag=0,sum=0;
    cin >> a >> b >> p;
    string s;
    cin >> s;
    vector <ll> index,cost;

    //Identify the indices where the transport changes from bus to tram and vice versa. Then, iterate in the reverse direction
    //checking the required amount at each case. Break when it is greater than the avalable money. Look out for the edge cases.

    if(s[0]=='A'){
        cost.push_back(a);
        index.push_back(0);
    }
    else{
        cost.push_back(b);
        index.push_back(0);
    }
    for(i=1;i<s.length()-1;i++){
        if(s[i] != s[i-1]){
            index.push_back(i);
            if(s[i]=='A')
                cost.push_back(a);
            else
                cost.push_back(b);
        }
    }
    cost.push_back(0);
    index.push_back(s.length()-1);
    if(cost.size()==1){
        if(p>=cost[0])
            cout << 1 << "\n";
        else
            cout << s.length() << '\n';
    }
    else{
        for(i=cost.size()-1;i>=0;i--){
            sum += cost[i];
            if(sum <= p)
                temp = index[i];
            else if(sum > p){
                res = temp+1;
                break;
            }
        }
        //for(i=0;i<cost.size();i++)
          //  cout << cost[i] << " " << index[i] << " ";
        if(i==-1)
            res = 1;
        cout << res << "\n";
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
