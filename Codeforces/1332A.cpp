//Codeforces 1332A

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<math.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a,b,c,d,x,y,x1,x2,y1,y2,u,v,flag1=0,flag2=0,tempx,tempy;
    cin >> a >> b >> c >> d;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    x += b - a;
    y += d - c;
    u = x;
    v = y;
    if(x >= x1 && x <= x2 && y >= y1 && y <= y2 && (x2>x1||(a+b ==0)) && (y2>y1||(c+d==0))){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i=0;i<t;i++){
        solve();
    }
}
