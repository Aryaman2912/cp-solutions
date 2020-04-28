#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    int arr[t];
	for(int i=0;i<t;i++){
		cin >> arr[i];
	}
	for(int i=0;i<t;i++){
		ll k = distance(arr,max_element(arr+i,arr+t));
		cout << arr[k] << " ";
		i = k;
	}
	// cout << arr[t-1] << " ";
}