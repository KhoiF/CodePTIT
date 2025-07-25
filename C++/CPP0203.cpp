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
        int tmp;
        set<int> se;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(tmp>0)   se.insert(tmp);
        }
        int ans=1;
        for(auto x:se)
        {
            if(x==ans)  ans++;
            else break;
        }
        cout << ans << endl;
    }
}