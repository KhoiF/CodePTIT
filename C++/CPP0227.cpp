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
        int a[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)  cin >> a[i][j];
        }
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                for(int j=0; j<n; j++)  cout << a[i][j] << ' ';
            }
            else 
            {
                for(int j=n-1; j>=0; j--)   cout << a[i][j] << ' ';
            }
        }
        cout << endl;
    }
}   