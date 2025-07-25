#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int a[n][m],b[n][m];
        memset(b,0,sizeof(b));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)  cin >> a[i][j];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]==1)
                {
                    for(int k=0; k<m; k++)  b[i][k]=1;
                    for(int k=0; k<n; k++)  b[k][j]=1;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)  cout << b[i][j] << ' ';
            cout << "\n";
        }
    }
}