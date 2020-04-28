//Codechef STFOOD

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
using namespace std;
typedef long long ll;

void solve(){
    int n,profit=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int s,v,p;
        cin >> s >> p >> v;
	//s + 1 because s stores already exist. 
        profit = max(profit,(p/(s+1))*v);
    }
    cout << profit << "\n";
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