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
        vector<int> v(n),u(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            u[i]=v[i];
        }
        sort(u.begin(),u.end());
        for(int i=0; i<n; i++)
        {
            auto it=upper_bound(u.begin(),u.end(),v[i]);
            if(it==u.end()) cout << "_ ";
            else cout << *it << ' ';
        }
        cout << "\n";
    }
}