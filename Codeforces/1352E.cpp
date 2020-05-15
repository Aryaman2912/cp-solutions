#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for (ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll n,i=0,j=0,k,m=1,sum1=0,sum2=0,count=0,c=0,flag1=0,flag2=0;
    cin >> n;
    std::vector<ll> a(n),freq(n+1),part_sum;
    loop(i,0,n){
        cin >> a[i];
        freq[a[i]]++;
    }
    loop(i,0,n){
        loop(j,0,part_sum.size()){
            part_sum[j] += a[i];
        }
        part_sum.pb(a[i]);
        loop(j,0,part_sum.size()-1){
            if(part_sum[j] <= n){
                count += freq[part_sum[j]];
                freq[part_sum[j]] = 0;
            }
        }
    }
    cout << count << "\n";

}
 
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
