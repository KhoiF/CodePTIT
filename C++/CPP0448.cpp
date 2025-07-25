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
        map<int, int> mp;
        int tmp;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(mp.count(tmp))   mp[tmp]+=1;
            else mp[tmp]=1;
        }
        if(mp.count(x))   cout << mp[x] << endl;
        else cout << "-1\n";
    }
}