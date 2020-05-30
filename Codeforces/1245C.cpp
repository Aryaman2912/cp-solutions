//sg
#include<bits/stdc++.h>
#include<string.h>
#define M 1e9 + 7
#define C 998244353
#define pi 3.14159265359
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

ull choose(ull n, ull k) {
    ull r = 1;
    ull d;
    if (k > n) return 0;
    for (d=1; d <= k; d++) {
        r *= n--;
        r /= d;
    }
    return r;
}

long long int fibonacci_fast(long long int n) {
    std::vector <long long> fibonacci;
    fibonacci.push_back(0);
    fibonacci.push_back(1);
    for(long long i=2;i<=n;i++){
        fibonacci.push_back((fibonacci[i-1]+fibonacci[i-2])%ll(M));
    }
    return fibonacci[n]%ll(M);
}

void solve(){
    ll i=0,j,u=0,v=0,w=0,n=0,ans=1;
    string s;
    cin >> s;
    vector <ll>cont;
    i=0;
    while(i<s.length()){
        if(s[i]=='u'){
            while(i<s.length() && s[i]=='u'){
                i++;
                u++;
            }
            cont.pb(u);
            u=0;
        }
        else if(s[i]=='n'){
            while(i<s.length() && s[i]=='n'){
                i++;
                n++;
            }
            cont.pb(n);
            n=0;
        }
        else if(s[i]=='m' || s[i] == 'w'){
            ans = 0;
            break;
        }
        else{
            i++;
        }
    }
    loop(i,0,cont.size()){
        // cout
        ans = (ans*fibonacci_fast(cont[i]+1))%ll(M);
    }
    cout << ans << "\n";
        
}

    
 
int main()
{
    ll t = 1;
    // cin >> t;
    loop(f,0,t){
        solve();
    }   
}
