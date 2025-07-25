#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> k >> n;
        int x;
        vector<int> v;
        for(int i=0; i<k; i++)
        {
            for(int i=0; i<n; i++)
            {
                cin >> x;
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0; i<k*n; i++)    cout << v[i] << ' ';
        cout << endl;
    }
}