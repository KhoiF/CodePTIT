#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int tmp,ans;
        for(int i=1; i<=n; i++)
        {
           cin >> tmp;
           if(tmp==x)   ans=i;
        }
        cout << ans << endl;
    }
}