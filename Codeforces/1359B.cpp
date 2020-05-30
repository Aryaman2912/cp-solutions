#include<bits/stdc++.h>
using namespace std;
#define M 1e9 + 7
#define C 998244353
#define pi 3.14159265359
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;

void solve(){
    ll i=0,n,m,x,y,j,price=0;
    cin >>n>>m>>x>>y;
    string s;
    char a[n][m];
    loop(i,0,n){
        string s;
        cin >> s;
        // cout << s << "\n";
        loop(j,0,m){
            a[i][j] = s[j];
        }
    }
    if(m==1){
        loop(i,0,n){
            if(a[i][0] == '.')
                price += x;
        }
        cout << price << "\n";
    }
    else{
        if(2*x<=y){
            loop(i,0,n){
                loop(j,0,m){
                    if(a[i][j]=='.'){
                        price += x;
                    }
                }
            }
            cout << price << "\n";
        }
        else{
            loop(i,0,n){
                loop(j,0,m){
                    if(a[i][j]=='.' && a[i][j+1] == '.' && j<=m-2){
                        price += y;
                        a[i][j] = 'B';
                        a[i][j+1] = 'B';
                    }
                    else if(a[i][j]=='.'){
                        price += x;
                        a[i][j] = 'B';
                    }
                }
            }
            cout << price << "\n";
        }   
    }
}

int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){    
        solve();
    }   
}
