#include<bits/stdc++.h>

using namespace std;
int n,k,a[21][21],ans;
void Try(int i, int j, int sum)
{
    if(sum>k || i>n || j>n) return;
    if(i==n && j==n && sum==k)
    {
        ans+=1;
        return;
    }
    Try(i+1,j,sum+a[i+1][j]);
    Try(i,j+1,sum+a[i][j+1]);
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ans=0;
        cin >> n >> k;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) cin >> a[i][j];
        }
        Try(1,1,a[1][1]);
        cout << ans << endl;
    }
}