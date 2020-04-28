#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        long long arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        if(N>=64)
            cout<<0<<endl;
        else
        {
            long long val=(1ll<<(N-1));
            long long ans=0;
            for(int i=0;i<N;i++)
                if(arr[i]>=val)
                    ans=(ans+arr[i]%M)%M;
            cout<<ans<<endl;
        }
    }
}