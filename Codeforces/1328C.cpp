#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<math.h>
using namespace std;
typedef long long ll;
char o = '1',t='2',z='0';

void solve(){
    ll n,rem,i=0,flag=0;
    string s,a="",b="";
    cin >> n;
    cin >> s;
    //The first time a '1' is reached, it is added to the number which will be maximum,flag=1 after that '1' is added to the number which is not the maximum
    //If flag is 0, '2' is equally divided else '2' goes to the number which is not the maximum
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            a.push_back(z);
            b.push_back(z);
        }
        else if(s[i]=='1'){
            if(flag==0){
                a.push_back(o);
                b.push_back(z);
                flag=1;
            }
            else{
                a.push_back(z);
                b.push_back(o);
            }
        }
        else{
            if(flag==0){
                a.push_back(o);
                b.push_back(o);
            }
            else{
                a.push_back(z);
                b.push_back(t);
            }
        }
    }
    cout << a << "\n" << b << "\n";
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