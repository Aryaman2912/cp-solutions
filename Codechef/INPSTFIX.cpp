#include<bits/stdc++.h>
#define M 1000000007
#define C 998244353
#define pi 3.14159265359
using namespace std;
typedef long long int ll;
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
int precedence(char c){
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '^')
        return 3;
    else
        return -1;
}
void solve(){
    ll i=0,j=0,n,high=0;
    cin >> n;
    string s,ans;
    cin >> s;
    stack <char> st;
    loop(i,0,n){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ans += s[i];
        }
        else if(s[i]=='('){
            st.push('(');
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top() != '('){
                char c = st.top();
                ans += c;
                st.pop();
            }
            if(st.top() == '('){
                char c = st.top();
                st.pop();
            }
        }
        else{
            while(!st.empty() && (precedence(s[i]) <= precedence(st.top()))){
                char c = st.top();
                ans += c;
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout << ans << "\n";
}

    
 
int main()
{
    ll t = 1;
    cin >> t;
    loop(f,0,t){
        solve();
    }   
}
