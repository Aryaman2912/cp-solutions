#include<iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for (ll i = a; i < b; ++i)
#define rloop(i,a,b) for(ll i = a; i >= b; --i)
 
void solve(){
    ll n,i,j,k,m,count=0,temp,x=0,y=0,time=0;
    string s;
    cin >> s;
    set< pair<pair<ll,ll>,pair<ll,ll>>> direction;
    loop(i,0,s.length()){
        if(s[i]=='N'){
            m = direction.size();
            y += 1;
            direction.insert(make_pair(make_pair(x,y),make_pair(x,y-1)));
            direction.insert(make_pair(make_pair(x,y-1),make_pair(x,y)));
            if(direction.size()==m)
                time += 1;
            else
                time += 5;
        }
        else if(s[i]=='S'){
            m = direction.size();
            y -= 1;
            direction.insert(make_pair(make_pair(x,y),make_pair(x,y+1)));
            direction.insert(make_pair(make_pair(x,y+1),make_pair(x,y)));
            if(direction.size()==m)
                time+= 1;
            else
                time += 5;
        }
        else if(s[i]=='E'){
            m = direction.size();
            x += 1;
            direction.insert(make_pair(make_pair(x,y),make_pair(x-1,y)));
            direction.insert(make_pair(make_pair(x-1,y),make_pair(x,y)));
            if(direction.size()==m)
                time += 1;
            else
                time += 5;
        }
        else if(s[i]=='W'){
            m = direction.size();
            x -= 1;
            direction.insert(make_pair(make_pair(x,y),make_pair(x+1,y)));
            direction.insert(make_pair(make_pair(x+1,y),make_pair(x,y)));
            if(direction.size()==m)
                time += 1;
            else
                time += 5;
        }
    }
    cout << time << "\n";
}
 
int main()
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
    ll t = 1;
    cin >> t;
    cin.ignore();
    loop(f,0,t){
        solve();
    }
}					
