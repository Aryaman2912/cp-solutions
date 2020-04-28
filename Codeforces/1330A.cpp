//Codeforces 1330A

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
    for(int f=0;f<t;f++){
        int n,k,g=0,b=0;
        set <int> ranks;
        vector <int> arr;
        cin >> n >> k;
        // Make a set of inputs
        for(int i=0;i<n;i++){
            int val;
            cin >> val;
            ranks.insert(val);
        }
        //Convert set to array
        for(auto itr = ranks.begin();itr != ranks.end();itr++){
            arr.push_back(*itr);
        }
        //0th element edge case
        if(k >= arr[0] - 1){
            k -= arr[0] - 1;
            b = arr[0];
        }
        //Each iteration checks if the number of contests available is sufficient to move to the next rank
        //that has already been collected which is the next element of the sorted array. If not, the loop is broken.
        for(g=1;g<arr.size();g++){
            if((k - (arr[g] - arr[g-1] - 1)) >= 0){
                k -= (arr[g] - arr[g-1] -1);
                b = arr[g];
            }
            else{
                break;
            }
        }
        //Output the sum of the last rank that in the input array which was reached in the for loop and the
        //number of contests still available
        cout <<b + k<< "\n";
    }
}
