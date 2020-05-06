#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
bool visited[10005];
vector <ll> edges[10005];

string lowercase(string data){
    std::for_each(data.begin(), data.end(), [](char & c){
        c = ::tolower(c);
    });
    return data;
}
void solve(){
    ll n,x,i,j,temp,ans=0,y=1,m,maxnode=0;
    cin >> n;
    string s1,s2,s3;
    map <string,ll> l;

    l["polycarp"] = 1;

    for(i=1;i<=n;i++){
        cin >> s1 >> s2 >> s3;
        s1 = lowercase(s1);
        s3 = lowercase(s3);
        ll e = l[s3] + 1;
        if(ans < e){
            ans=e;
        }
        l[s1] = e;
    }

    cout << ans;
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