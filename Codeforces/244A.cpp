//Codeforces 244A

#include <iostream>
#include<string>
using namespace std;
typedef long long ll;
 
int main()
{
    ll n,k;
    cin >> n >> k;
    // Flag to chack if a particular piece has been taken already
    ll a[k],flag[n*k] = {0};
    for(ll i=0;i<k;i++){
        cin >> a[i];
        flag[a[i]-1]++;
    }
    //After every n numbers,print a value that is part of the input
    for(ll i=0;i<n*k;i++){
        if(i%n==0){
            cout<< "\n";
            cout << a[i/n]<<' ';
        }
        else{
            for(ll j = 0;j<n*k;j++){
                if(flag[j] == 0){
                    cout << j + 1 << " ";
                    flag[j] = 1;
                    break;
                }
            }
        }
    }
}