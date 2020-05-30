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
    ll i=0,n,ta,tb,tc,a,b,c,ans=0,res=0,temp,n1,n2,n3;
    cin >>n>>ta>>tb>>tc;
    a = max(max(ta,tb),tc);
    c = min(min(ta,tb),tc);
    b = ta+tb+tc - (a+c);
    // cout << a << " " << b << " " << c << "\n";
    // cout << n/c+1 << "\n";
    if(n%a==0){
        ans = i+n/a;
    }
    else if(n%b==0){
        ans = i + n/b;
    }
    else if(n%(a+b)==0){
        ans = i+2*(n/(a+b));
    }
    else if(n%(a+b+c)==0){
        ans = 3*(n/(a+b+c));
    }
    else{
        ans=0;
    }
    // cout << ans <<" " <<i<< "\n";
    res = max(ans,res);
    if(n%c==0){
        cout << n/c << "\n";
    }
    else{
        temp=n1=n2=n3=n;
        while(i<=(temp/c)+1&&n1>=0){
            // ans=0;
            n1 -= c;

            // cout << n <<" " <<c <<"\n";
            i++;
            if(n1%a==0){
                ans = i+n1/a;
            }
            else if(n1%b==0){
                ans = i + n1/b;
            }
            else if(n1%(a+b)==0){
                ans = i+2*(n1/(a+b));
            }
            else if(n1%(a+b+c)==0){
                ans = i+ 3*(n1/(a+b+c));
            }
            else{
                ans=0;
            }
            // cout << ans <<" " <<i<< "\n";
            res = max(ans,res);
        }
        i=0;
        while(i<=(temp/b)+1&&n2>=0){
            // ans=0;
            n2 -= b;

            // cout << n <<" " <<c <<"\n";
            i++;
            if(n2%a==0){
                ans = i+n2/a;
            }
            else if(n2%b==0){
                ans = i + n2/b;
            }
            else if(n2%(a+b)==0){
                ans = i+2*(n2/(a+b));
            }
            else if(n2%(a+b+c)==0){
                ans = i+ 3*(n2/(a+b+c));
            }
            else{
                ans=0;
            }
            // cout << ans <<" " <<i<< "\n";
            res = max(ans,res);
        }
        i=0;     
        while(i<=(temp/a)+1&&n3>=0){
            // ans=0;
            n3 -= a;

            // cout << n <<" " <<c <<"\n";
            i++;
            if(n3%a==0){
                ans = i+n3/a;
            }
            else if(n3%b==0){
                ans = i + n3/b;
            }
            else if(n3%(a+b)==0){
                ans = i+2*(n3/(a+b));
            }
            else if(n3%(a+b+c)==0){
                ans = i+ 3*(n3/(a+b+c));
            }
            else{
                ans=0;
            }
            // cout << ans <<" " <<i<< "\n";
            res = max(ans,res);
        }        
        cout << res << "\n";
    }
    
}

int main()
{
    ll t = 1;
    // cin >> t;
    loop(f,0,t){    
        solve();
    }   
}
