#include<bits/stdc++.h>
#include<string.h>
#define M 1000000007
#define C 998244353
#define pi 3.14159265359
// #define MAXN long long 1e6 + 5
using namespace std;
typedef unsigned long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> a[500005];
 
void solve(){
    ll i=0,j=0,n,length=0,start1=0,start2=0,start3=0;
    string s;
    cin >> s;
    bool c1=false,c2=false,c3=false;
    set<ll>minlen;
    loop(i,0,s.length()){
        if(s[i]=='1'){
            c1=true;
            if(c2&&c3){
                minlen.insert(i-min(start3,start2)+1);
                if(start2<start3)
                    c2=false;
                else
                    c3=false;
            }
            start1=i;
        }
        else if(s[i]=='2'){
            c2=true;
            if(c1&&c3){
                minlen.insert(i-min(start1,start3)+1);
                if(start1<start3)
                    c1=false;
                else
                    c3=false;
            }
            start2=i;
        }
        else{
            c3=true;
            if(c2&&c1){
                minlen.insert(i-min(start1,start2)+1);
                if(start2<start1)
                    c2=false;
                else
                    c1=false;
            }
            start3=i;
        }
    }
    if(minlen.size()){
        cout << *min_element(minlen.begin(),minlen.end()) << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}

    
 
int main()
{
    ll t = 1;
    cin >> t;
    // cin.ignore();
    loop(f,0,t){
        solve();
    }   
}
