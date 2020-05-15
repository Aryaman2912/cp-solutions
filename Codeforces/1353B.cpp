#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
 
void solve(){
    ll i=0,j=0,n,m=0,k,temp=-1,flag=0,sum=0;
    cin >> n >> k;
    std::vector<ll> a(n),b(n);
    loop(i,0,n){
        cin >> a[i];
    }
    loop(i,0,n){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    loop(i,0,n){
        loop(j,temp+1,n){
            if(m==k){
                flag=1;
                break;
            }
            if(b[i] > a[j]){
                swap(b[i],a[j]);
                m++;
                temp = j;
                if(m==k)
                    flag=1;
                break;
            }
            if(m==k){
                flag=1;
                break;
            }

        }
        if(flag==1)
            break;
    }
    cout << accumulate(a.begin(), a.end(),sum) << "\n";

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
					
