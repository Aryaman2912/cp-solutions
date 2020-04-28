//Codeforces 234B

#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //Read input from input.txt and write output to output.txt	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n,k;
    cin >> n >> k;
    ll a[n];
    vector < pair <int,int> > vect;
    //Use pair to have key-value pairs of array_value-index(1 based) respectively
    for(ll i=0;i<n;i++){
        cin >> a[i];
        vect.push_back( make_pair(a[i],i+1));
    }
    //Sort the array based on the array values(light at each hour)
    sort(vect.begin(),vect.end());
    //Lowest possible light he can read at
    cout << vect[n - k].first << '\n';
    //Print indices of the lights that are greater than the minimum he needs to read at
    for(ll j=n-k;j<n;j++)
        cout << vect[j].second << " ";
}