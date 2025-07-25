#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int tmp;
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            mp[tmp]=1;
        }
        for(int i=0; i<m; i++)
        {
            cin >> tmp;
            if(mp.count(tmp))   mp[tmp]++;
            else mp[tmp]=1;
        }
        for(auto x : mp)
        {
            cout << x.first << ' ';
        }
        cout << "\n";
        for(auto x : mp)
        {
            if(x.second>1)    cout << x.first << ' ';
        }
        cout << endl;
    }
}