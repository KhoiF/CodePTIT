#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<int> v;
        for(int i=2; i<=n; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    v.push_back(i);
                    n/=i;
                }
            }
        }
        if(n!=1)    v.push_back(n);
        if(v.size()<k)  cout << "-1";
        else cout << v[k-1];
        v.clear();
        cout << "\n";
    }
}