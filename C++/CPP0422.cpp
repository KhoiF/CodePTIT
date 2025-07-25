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
        vector<long long> v;
        long long x;
        int tmp=0;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            if(!x)  tmp++;
            v.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]!=0) cout << v[i] << ' ';
        }
        for(int i=1; i<=tmp; i++)   cout << 0 << ' ';
        cout << endl;
    }
}