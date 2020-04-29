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
    ll n,m,i,j,temp,ans=0,x=-1,y=-1;
    cin >> n >> m;
    string s;
    vector <ll> p(m),cumulative(n);
    ll index[26] = {0},freq[n] = {0};
    cin >> s;
    for(i=0;i<m;i++){
        cin >> p[i];
    }
    for(i=0;i<m;i++){
        freq[p[i]-1] += 1;
    }
    // Check the cumulative frequency of each of the letters in the string starting from the end. 
    cumulative[n-1] = freq[n-1];
    for(i = n-2;i>=0;i--){
        cumulative[i] = cumulative[i+1] + freq[i];
    }
    for(i=0;i<n;i++){
        index[int(s[i])-97] += cumulative[i]+1;
    }
    for(j=0;j<26;j++){
        cout << index[j] << " ";
    }
    cout << '\n';


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
