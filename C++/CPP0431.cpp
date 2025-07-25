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
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a,a+n);
        long long ans=0;
        int l=0,r=1;
        while(l<=r && r<n)
        {
            if(l==r)    r++;
            else
            {
                if(a[r]-a[l]<k)
                {
                    ans+=1ll*(r-l);
                    r++;
                }
                else
                {
                    l++;
                }
            }
        }
        cout << ans << endl;
    }
}