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
#define loop(i,a,b) for (ll i = a; i < b; ++i)
#define rloop(i,a,b) for(ll i = a; i >= b; --i)

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];

void solve(){
    ll n,i,j,k,m,count=0;
    cin >> n;
    i = sqrt(n)+1;
    while(1){
        if(i<1)
            break;
        if((3*i*i + i)/2 <= n){
            n -= (3*i*i+i)/2;
            i = sqrt(n) + 1;
            count++;
        }
        else
            i--;
    }
    cout << count << "\n";
}
 
int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
