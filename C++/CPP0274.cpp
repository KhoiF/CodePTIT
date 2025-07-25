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
        vector<int> v(n);
        vector<int> u(1000001,0);
        for(int i=0; i<n; i++){
            cin >> v[i];
            u[v[i]]++;
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(u[v[i]]>1)
            {
                ans+=u[v[i]];
                u[v[i]]=0;
            }
        }
        cout << ans << endl;
    }
}