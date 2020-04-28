//Codechef LADDU

#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,laddus=0;
        string s;
        cin >> n >> s;
        while(n--){
            string l;
            cin >> l;
            if(l[8]=='W'){
                int a;
                cin >> a;
                laddus += 300 + ((20-a)>0?(20-a):0);
            }
            else if(l[0]=='B'){
                int v;
                cin >> v;
                laddus += v;
            }
            else if(l[0]=='T'){
                laddus += 300;
            }
            else if(l[8]=='H'){
                laddus += 50;
            }
        }
        if(s[0]=='I')
            cout << laddus/200 << "\n";
        else{
            cout << laddus/400 << "\n";
        }
    }
    return 0;
}
