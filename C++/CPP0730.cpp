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
        for(int i=0; i<n; i++)  cin >> v[i];
        long long s1=0,s2=INT_MIN;
        for(int i=0; i<n; i++)
        {
            s1+=v[i];
            s2=max(s2,s1);
            if(s1<0)    s1=0;
        }
        cout << s2 << endl;
    }
}