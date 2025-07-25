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
        int st,ed;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=u[i])
            {
                st=i+1;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]!=u[i])
            {
                ed=i+1;
                break;
            }
        }
        cout << st << ' ' << ed << "\n";
    }
}