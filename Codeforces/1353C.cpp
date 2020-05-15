#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
 
void solve(){
    ll i=0,j=0,n,m=0,k,temp=-1,flag=0,sum=0;
    cin >> n;
    k = (n-1)/2;
    loop(i,1,k+1){
        sum += i*(2*i+1);
    }
    // sum = 4*sum + 8*(k*(k+1))/2;
    // loop(i,1,k+1){
    //     sum += i;
    // }
    cout << 4*sum - 4*((k)*(k+1))/2 << "\n";

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
					
