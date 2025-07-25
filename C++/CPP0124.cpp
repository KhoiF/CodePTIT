#include<bits/stdc++.h>

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int cnt=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt+=1;
                n/=i;
            }
            cout << i << ' ' << cnt << "\n";
            cnt=0;
        }
    }
    if(n>1)    cout << n << " 1";
}