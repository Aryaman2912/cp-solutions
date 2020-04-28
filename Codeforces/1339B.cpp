//Codeforces 1339B

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
using namespace std;
typedef long long ll;

void solve(){
    ll n,i=0,j=0,c1=0,c2=0,k=0,flag=0;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    //Starting from the center, print the elements towards the left and right alternatively
    //If n is odd, print the middle element at the last
    if(n%2 == 1){
        for(j=n/2,k=n/2 + 1;j>=1,k <n;k++,j--){
            cout << a[j] << " " << a[k] << " ";
        }
        cout << a[0];
    }
    else{
        for(j=n/2-1,k=n/2;j>=0,k<n;k++,j--){
            cout << a[j] << " " << a[k] << " ";
        }
    }
    cout << "\n";
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
