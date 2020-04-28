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
    int n,i,j=0,k,temp,num,maxind=0,p=1;
    cin >> n >> k;
    string res = string(n,'a');
    temp = k;
    for(i=2;i<=n;i++){
        if(k -(i-1) > 0){
            //cout << i<<"\n";
            k -= i-1;
            //cout << k << "\n";
        }
        else{
            j=i;
            //cout << j << " ";
            break;
        }
    }
    res[n-j] = 'b';
    res[n-k] = 'b';
    cout << res << "\n";
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

//Lexicographically, the smallest string will have a 'b' in positions 2 and 1. It is easy to observe that there will be i - 1 strings having leftmost 
//letter in the ith position. So, all you need to do is k -= (i - 1) as long as k > 0 and i goes from 2 to n. Suppose, j is the smallest value of i for 
//which you weren't able to perform this operation. That means the leftmost b will be at position j. Since, this is j from the right, it will be equivalent 
//to n - j + 1 from the left. This will be s[n - j].

//Now, if you would have k = 1 then rightmost b will be at position of 1. In general, for some remaining value of k, the rightmost b would be at 
//position k. So, that would mean n - k + 1 from the left. That would mean s[n - k].