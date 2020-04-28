//Codeforces 1312B

#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
	//Reversing the sorted array always works because as i and j increase,arr[j] and arr[l] decrease and hence,the differences can never be equal
        sort(arr,arr+n);
        reverse(arr,arr+n);
        for(int j=0;j<n;j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
}
