#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int ans=0;
        int tmp;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            ans=max(ans,tmp);
        }
        cout << ans << endl;
    }
}