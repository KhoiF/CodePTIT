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
        int i=0;
        while(i<n-1)
        {
            if(a[i]==a[i+1] && a[i]!=0)
            {
                a[i]*=2;
                a[i+1]=0;
                i++;
            }
            i++;
        }
        for(int j=0; j<n; j++)
        {
            if(a[j]!=0) cout << a[j] << ' ';
        }
        for(int j=0; j<n; j++)
        {
            if(a[j]==0) cout << a[j] << ' ';
        }
        cout << endl;
    }
}