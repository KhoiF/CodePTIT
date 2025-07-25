#include<bits/stdc++.h>

using namespace std;
long long c[1005][1005];
const int MOD=1000000007;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,r;
    for(int i=0; i<=1000; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i==j || j==0)    c[i][j]=1;
            else
            {
                c[i][j]=(c[i-1][j-1]+c[i-1][j])%MOD;
            }
        }
    }
    cin >> t;
    while(t--)
    {
        cin >> n >> r;
        cout << c[n][r] << "\n";
    }
}