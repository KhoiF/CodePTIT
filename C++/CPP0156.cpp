#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    long long b,p;
    cin >> t;
    while(t--)
    {
        cin >> b >> p;
        long long ans=0;
        for(long long i=1; i<p; i++)
        {
            if((i*i)%p==1)
            {
                long long tmp=p*(b/p)+i;
                if(tmp>b)   tmp-=p;
                ans+=(tmp-i)/p+1;
            }
        }
        cout << ans << endl;
    }
}