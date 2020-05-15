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

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll n,i,j,k,m;
    cin >> n >> m;
    if(n<=2 && m<=2)
        cout << "Yes" << "\n";
    else if(n>2 && m==1)
        cout << "Yes" << "\n";
    else if(m>2 && n==1)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
}
 
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
