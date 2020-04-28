//Codeforces 1300B

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
    vector <ll> vect;
    for(int i=0;i<2*n;i++){
        ll a;
        cin >> a;
        vect.push_back(a);
    }
    //Once you sort the array, the minimum difference between classes is going to be the difference between the two elements in the
    // middle of the array. (Just a hunch, but it worked)
    sort(vect.begin(),vect.end());
    cout << vect[(2*n + 1)/2] - vect[(2*n - 1)/2] << "\n";
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
