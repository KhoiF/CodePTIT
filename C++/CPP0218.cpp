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
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a,a+n);
        int x=a[n-1]-a[0];
        vector<int> v;
        for(int i=1; i<=sqrt(x); i++)
        {
            if(x%i==0)
            {
                v.push_back(i);
                if(i*i!=x)
                {
                    v.push_back(x/i);
                }
            }
        }
        int ans=0;
        for(int i=0; i<v.size(); i++)
        {
            int tmp=a[0]%v[i];
            int check=1;
            for(int j=1; j<n; j++)
            {
                if(a[j]%v[i]!=tmp)
                {
                    check=0;
                    break;
                }
            }
            if(check)   ans+=1;
        }
        cout << ans << endl;
    }
}