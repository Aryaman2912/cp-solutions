//sg
#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
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

void solve(){
    ll i=0,j,a,b,c,n,R=0,P=0,S=0,flag=0;
    cin >> n>>a>>b>>c;
    string s,ans;
    char res[n];
    cin >> s;
    loop(i,0,n){
        if(s[i]=='R')
            R += 1;
        else if(s[i]=='P')
            P += 1;
        else
            S += 1;
        res[i] = 'X';
    }
    if(min(a,S) + min(b,R) + min(c,P) >= n/2 + n%2){
        cout << "Yes" << "\n";
        while(a>0){
            flag=0;
            // cout << "s";
            loop(j,0,n){
                if(s[j] == 'S' && res[j] == 'X'){
                    res[j] = 'R';
                    a--;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                // cout << "a";
                break;
            }
        }
        while(b>0){
            flag=0;
            loop(j,0,n){
                if(s[j] == 'R' && res[j]=='X'){
                    res[j] = 'P';
                    b--;
                    flag=1;
                    break;   
                }
            }
            if(flag==0){
                    // cout << "B";
                    break;
            }
        }
        while(c>0){
            flag=0;
            loop(j,0,n){
                if(s[j]=='P' && res[j] == 'X'){
                    res[j] = 'S';
                    c--;
                    flag=1;
                    break;      
                }
            }
            if(flag==0){
                // cout << "c";
                break;
            }
        }
        loop(j,0,n){
            if(res[j]=='X' && a>0){
                res[j] = 'R';
                a--;
            }
            else if(res[j]=='X' && b>0){
                res[j] = 'P';
                b--;
            }
            else if(res[j]=='X' && c>0){
                res[j] = 'S';
                c--;
            }
        }
        loop(i,0,n)
            cout << res[i];
        cout << "\n";
    }
    else{
        cout << "No" << "\n";
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
