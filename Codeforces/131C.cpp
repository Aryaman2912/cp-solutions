#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef unsigned long long int ll;
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
    ll n,m,t,res=0,i;
    cin >> n >> m >> t;
    if(m+n==t){
        cout << 1 << "\n";
    }
    else{
        for(i=4;i<t;i++){
            res += combinations(n,i)*combinations(m,t-i);
        }
        cout << res << "\n";
    }
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