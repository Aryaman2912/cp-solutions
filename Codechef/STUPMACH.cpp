//Codechef STUPMACH

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<math.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,i=0,j=0,k=0,p1=0,c1=0,p=0,c=0,flag=0;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    //index of minimum element
    k = distance(a,min_element(a,a+n));
    //minimum element of array
    p = *min_element(a,a+n);
    //minimum value added to each box from the box with the minimum element
    c = n*p - k*p;
    //add all the values of upto the minimum sized box
    for(j=0;j<k;j++){
        c += a[j];
    }
    cout << c << "\n";
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
