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
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin >> v[i];
        sort(v.begin(),v.end());
        cout << v[x-1] << endl;
    }
}