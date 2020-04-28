#include <iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,k = 1000000,i,j,operations=0,flag=0,a,c,t,g;
    string s;
    ll sudoku[9][9];
    for(i=0;i<9;i++){
        cin >> k;
        for(j=0;j<9;j++){
            sudoku[i][8-j] = k%10;
            k /= 10;
        }
    }
    if(sudoku[0][0] != 9)
        sudoku[0][0] += 1;
    else
        sudoku[0][0] -= 1;
 
    if(sudoku[3][1] != 9)
        sudoku[3][1] += 1;
    else
        sudoku[3][1] -= 1;
 
    if(sudoku[6][2] != 9)
        sudoku[6][2] += 1;
    else
        sudoku[6][2] -= 1;
 
    if(sudoku[1][3] != 9)
        sudoku[1][3] += 1;
    else
        sudoku[1][3] -= 1;
 
    if(sudoku[4][4] != 9)
        sudoku[4][4] += 1;
    else
        sudoku[4][4] -= 1;
 
    if(sudoku[7][5] != 9)
        sudoku[7][5] += 1;
    else
        sudoku[7][5] -= 1;
 
    if(sudoku[2][6] != 9)
        sudoku[2][6] += 1;
    else
        sudoku[2][6] -= 1;
 
    if(sudoku[5][7] != 9)
        sudoku[5][7] += 1;
    else
        sudoku[5][7] -= 1;
 
    if(sudoku[8][8] != 9)
        sudoku[8][8] += 1;
    else
        sudoku[8][8] -= 1;
 
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            cout << sudoku[i][j];
        }
        cout << "\n";
    }
 
}
 
int main()
{
    ll t = 1;
    cin >> t;
    cin.ignore();
    for(ll f=0;f<t;f++){
        solve();
    }
 
}