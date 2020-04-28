//Codeforces 1296B

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    if(n % 9)
        cout << 10*(n / 9) + (n % 9) << "\n";
    else
        cout << 10*(n / 9) - 1 << "\n";
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
