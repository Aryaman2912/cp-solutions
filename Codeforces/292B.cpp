#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
// #define MAXN long long 1e6 + 5
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[500005];
 
void solve(){
    ll i=0,j=0,n,m,x,y,c1=0,c2=0,cn=0,flag=0;
    cin >> n >> m;
    vector <ll> deg(n+1);
    loop(i,1,m+1){
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
    }
    loop(i,1,n+1){
        if(deg[i]==1)
            c1++;
        else if(deg[i]==2)
            c2++;
        else if(deg[i]==n-1)
            cn++;
        else{
            flag=1;
            cout << "unknown topology" << "\n";
            break;
        }
    }
    if(flag!=1){
        if(c1==2 && c2 == n-2 && cn==0)
            cout << "bus topology" << "\n";
        else if(c1==0 && c2==n && cn==0)
            cout << "ring topology" << "\n";
        else if(c1==n-1 && c2==0 && cn==1)
            cout << "star topology" << "\n";
        else{
            cout << "unknown topology" << "\n";
        }
    }

}
 
int main()
{
    ll t = 1;
    // cin >> t;
    // cin.ignore();
    loop(f,0,t){
        solve();
    }   
}
					
