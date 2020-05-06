#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
//typedef int64_t ll;

ll factorial(ll n){
    ll prod = 1;
    for(ll i=1;i<=n;i++){
        prod = prod*(i);
    }
    return prod;
}
ll combinations(int n, int r)
{
    if(n<r){
        return 0;
    }
    else{
        // p holds the value of n*(n-1)*(n-2)...,
        // k holds the value of r*(r-1)...
        long long p = 1, k = 1;

        // C(n, r) == C(n, n-r),
        // choosing the smaller value
        if (n - r < r)
            r = n - r;

        if (r != 0) {
            while (r) {
                p *= n;
                k *= r;

                // gcd of p, k
                long long m = __gcd(p, k);

                // dividing by gcd, to simplify product
                // division by their gcd saves from the overflow
                p /= m;
                k /= m;

                n--;
                r--;
            }

            // k should be simplified to 1
            // as C(n, r) is a natural number
            // (denominator should be 1 ) .
        }

        else
            p = 1;

        // if our approach is correct p = ans and k =1
        return p;
    }
}
void solve(){
    ll n,m,t,res=0,i,k,j,d,flag=0,x,y;
    cin >> n >> m;
    ll a[n][m];
    res = m*n;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        ll numh=0;
        for(j=0;j<m;j++){
            if(a[i][j]==1){
                numh += 1;
            }
        }
        res += pow(2,numh)  -numh + pow(2,m-numh) -(m-numh) - 2;
    }
    for(i=0;i<m;i++){
        ll numv = 0;
        for(j=0;j<n;j++){
            if(a[j][i]==1){
                numv += 1;
            }
        }
        res += pow(2,numv) - numv + pow(2,n-numv) - (n-numv)-2;
    }
    cout << res << "\n";
}

int main()
{
    ll t = 1;
    //cin >> t;
    //cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
}