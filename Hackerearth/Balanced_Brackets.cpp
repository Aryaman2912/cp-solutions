#include <iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll flag=0;
    string s;
    stack <char> st;
    cin >> s;
    // cout << s << "\n";
    if(s[0] == '(' || s[0] == '{' || s[0] == '['){
        for(ll i=0;i< s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else if(st.size()>0){
                if((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[')){
                    st.pop();
                }
                else{
                    flag=1;
                    break;
                }
            }
            else{
                flag=1;
                break;
            }
        }
    }
    else{
        flag=1;
    }
    // cout << flag << "\n";
    if(flag || st.size()){
        cout << "NO" << "\n";
    }
    else if(!st.size()){
        cout << "YES" << "\n";
    }

}

int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }

}