#include <iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef int ll;
 
 
void solve(){
    int n,i,j=0,k,temp,flag2=0;
    cin >> n;
    //Have a flag array to keep track of the princesses who are married and another flag array to keep track of the princes who are married.
    //In the end, check if there is a princess who is unmarried and if yes, find a prince who is unmarried using the flag arrays.
    ll flag[n]={0},flag1[n]={0};
    for(i=0;i<n;i++){
        cin >> k;
        vector <ll> b(k);
        for(j=0;j<k;j++){
            cin >> b[j];
        }
        for(j=0;j<k;j++){
            if(flag[b[j]-1]==0){
                flag[b[j]-1] = 1;
                flag1[i] = 1;
                break;
            }
        }
    }
    /*for(i=0;i<n;i++)
        cout << flag[i] << " ";
    cout << "\n";
    for(i=0;i<n;i++)
        cout << flag1[i] << " ";
    cout << "\n";*/
    for(i=0;i<n;i++){
        if(flag1[i]==0){
            break;
        }
    }
    for(j=0;j<n;j++){
        if(flag[j]==0){
            break;
        }
    }
    if(i!=n &&j!=n){
        cout << "IMPROVE\n";
        cout << i+1 << " " << j+1<<"\n";
    }
    else{
        cout << "OPTIMAL" << "\n";
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
    //return 0;
}