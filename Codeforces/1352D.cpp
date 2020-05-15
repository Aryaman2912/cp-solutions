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

vector <ll> nodes(1100);
bool visited[1100];
vector <ll> edges[1100];
 
void solve(){
    ll n,i=0,j=0,k,m=1,sum1=0,sum2=0,count=1,c=0,b=0,flag1=0,flag2=0;
    cin >> n;
    std::vector<ll> a(n);
    loop(i,0,n){
        cin >> a[i];
    }
    sum1 = a[0];
    b = sum1;
    a.erase(a.begin());
    while(a.size() != 0){
        if(m%2){
            sum2=0;
            while(1){
                if(a.size()==0){
                    m+=1;
                    break;
                }
                sum2 += a[a.size()-1];
                c += a[a.size()-1];
                a.pop_back();
                if(sum2 > sum1){
                    m+=1;
                    break;
                }
            }
            if(a.size()==0){
                flag1=1;
                break;
            }
        }
        else{
            sum1=0;
            while(1){
                if(a.size()==0){
                    m+=1;
                    break;
                }
                sum1 += a[0];
                b += a[0];
                a.erase(a.begin());
                if(sum1>sum2){
                    m+=1;
                    break;
                }

            }
            if(a.size()==0){
                flag2=1;
                break;
            }
        }
        if(flag1==1 || flag2==1)
            break;
    }
    cout << m << " " << b  << " " <<c<< "\n"; 

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
