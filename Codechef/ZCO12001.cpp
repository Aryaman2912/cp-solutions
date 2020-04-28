#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll n,i,j,flag=0,k=0,r=0,u=0,ans=0,c=0;
    cin >> n;
    stack <ll> s,q;
    vector <ll> a(n),index,b,d,index2,e;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1){
            s.push(1);
            c += 1;
            e.push_back(s.size());
            // cout << s.size() << "\n";
        }
        else{
            s.pop();
            c += 1;
            e.push_back(s.size());
            if(s.empty()){
                index2.push_back(i+1);
                d.push_back(c);
                c = 0;
            }
            // cout << s.size() << "\n";
        }
    }
    // cout << distance(e.begin(),max_element(e.begin(),e.end()))<< "\n";
    cout << *max_element(e.begin(),e.end()) << " " << max_element(e.begin(),e.end()) - e.begin() + 1<< " ";
    u = distance(d.begin(),max_element(d.begin(),d.end()));
    cout << *max_element(d.begin(),d.end()) << " " << index2[u] - *max_element(d.begin(),d.end()) + 1;
}

int main()
{
    ll t = 1;
    //cin >> t;
    //cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
    return 0;
}

