#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,b;
    cin >> n >> k >> b;
    int ans=0;
    int a[n+1];
    fill(a,a+n+1,1);
    for(int i=0; i<b; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp]=0;
    }
    for(int i=1; i<=k; i++)
    {
        if(a[i]==0) ans++;
    }
    int tmp=ans;
    for(int i=k+1; i<=n; i++)
    {
        if(a[i]==0) tmp+=1;
        if(a[i-k]==0)   tmp-=1;
        ans=min(ans,tmp);
    }
    cout << ans;
}