#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int ans=0,tmp;
    for(int i=0; i<n; i++)
    {
        int d1 =0,d0=0;
        for(int j=0; j<3; j++)
        {
            cin >> tmp;
            if(tmp==1)  d1++;
            else d0++;
        }
        if(d1>d0)   ans++;
    }
    cout << ans;
}