//Codechef MULTHREE

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
    while(t--){
        ll k, sum=0;
        int d0,d1,d4,rem;
        cin >> k >> d0 >> d1;
        sum = d0 + d1;
	// d0 + d1 being divisble by 5 means that the number is not divisble by 3
	//(d0=8,d1=7) is divisible by 3 but that was not tested in any of the cases 
        if((d0 + d1)%5 == 0){
            cout << "NO" << "\n";
        }
	// if k > 3, from the 4th digit onwards, the digits start repeating (any permutation of 2,4,6,8) 4+6+8 is divisible by 3. Hence,
	// only the number of 2's matter. Their sum is added to the variable 'sum'. Any numbers remaining among 2,4,6,8 after (k - 3)/4 
	// sets of (2,4,6,8) in any order are added to 'sum' separately. Then divisibility of 'sum' by 3 is checked. 
        else{
            if(k >= 3){
                sum += (d0 + d1) % 10;
                d4 = ((d0 + d1) % 10 + ((d0 + d1) % 10)) % 10;
                rem = (k - 3) % 4;
                sum += ((k - 3)/4)*(2);
                if(rem == 1){
                    sum += (d4);
                }
                else if(rem == 2){
                    sum += ((d4)+ (d4*(2))%10);
                }
                else if(rem == 3){
                    sum += ((d4) + (d4*(2))%10 + ((d4)*4)%10);
                }
            }
            if(sum % 3 == 0){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
}
